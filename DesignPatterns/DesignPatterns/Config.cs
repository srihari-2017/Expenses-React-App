using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DesignPatterns
{
    class Config
    {
        private static Config config;
        public string Environment { set; get; }
        internal static Config GetInstance()
        {
            if(config == null)
            {
                config = new Config();
            }
            return config;
        }
    }
}
