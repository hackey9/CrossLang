using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;

namespace CSharpDLL
{
    public static class SharpLibrary
    {
        private static int _i = 1;

        static SharpLibrary()
        {
            Debug.WriteLine("Static ctor called");
        }

        public static void LifecycleBefore()
        {
            Debug.WriteLine("Before called");
        }

        public static bool LifecycleFrame()
        {
            _i++;
            return _i < 50;
        }

        public static void LifecycleAfter()
        {
            Debug.WriteLine("After called");
            Debug.WriteLine($"Value = {_i}");

            var message = $"CLR IS POWER! {_i}";
            var buffer = Encoding.ASCII.GetBytes(message);
            var span = buffer.AsSpan();

            var file = File.Create("___CLR_IS_POWER___.txt");
            file.Write(span);
            file.Flush();
            file.Close();
        }
    }
}