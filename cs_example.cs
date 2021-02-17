using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nord
{
    class ExampleClass
    {
        private bool m_someBool;
        private byte m_someByte;

        public ExampleClass(bool someBool, byte someByte)
        { m_someBool = someBool; m_someByte = someByte; }

        public void execute()
        {
            Console.WriteLine("value: " + m_someByte);
        }

        public bool foo() => m_someBool;
    }

    class CSExample
    {
        static void Main(String[] args)
        {
            ExampleClass someVal = new ExampleClass(false, 0);
            Console.WriteLine("Hello World!");
            someVal.execute();

            Console.WriteLine(someVal.foo());
        }
    }
}
