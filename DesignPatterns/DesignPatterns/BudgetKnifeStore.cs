using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DesignPatterns
{
    class BudgetKnifeStore : KnifeStore
    {
        //up to any subclass of KnifeStore to define this method
        public override Knife CreateKnife(string knifeType)
        {
            if (knifeType.Equals("steak"))
            {
                return new BudgetSteakKnife();
            }
            else if (knifeType.Equals("chef"))
            {
                return new BudgetChefKnife();
            }
            else return null;
        }
    }
}
