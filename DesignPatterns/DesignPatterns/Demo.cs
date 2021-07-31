using System;

namespace DesignPatterns
{
    internal class Demo
    {
        public Demo()
        {
        }

        internal void Singleton()
        {
            //Created a config object
            Config obj = Config.GetInstance();
            obj.Environment = "Lab";
            Console.WriteLine($"Object one environment : {obj.Environment}");
            Config obj2 = Config.GetInstance();
            Console.WriteLine($"Object two environment : {obj2.Environment}");
            obj.Environment = "Play Ground";
            Console.WriteLine($"Object one environment : {obj.Environment}");
            Console.WriteLine($"Object two environment : {obj2.Environment}");
        }
    }
}