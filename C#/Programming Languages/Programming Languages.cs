using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace ProgrammingLanguages
{
  class Program
  {
    static void Main()
    {
      List<Language> languages = File.ReadAllLines("./languages.tsv")
        .Skip(1)
        .Select(line => Language.FromTsv(line))
        .ToList();
      
      var list1 = from l in languages
                 select $"{l.Year}, {l.Name}, {l.ChiefDeveloper}";

      //DisplayString(list1);

      var list2 = from l in languages
                    where l.Name == "C#"
                    select l.Prettify();
      
      //DisplayString(list2);

      var list3 = from l in languages
                  where l.ChiefDeveloper.Contains("Microsoft")
                  select l.Prettify();

      //DisplayString(list3);

      var list4 = from l in languages
                  where l.Predecessors.Contains("Lisp")
                  select l.Prettify();
      
      //DisplayString(list4);

      var list5 = from l in languages
                  where l.Name.Contains("Script")
                  select l.Prettify();
      
      //DisplayString(list5);

      //Console.WriteLine(languages.Count);

      var list6 = from l in languages
                  where l.Year > 1994 & l.Year < 2006
                  select $"{l.Name} was invented in {l.Year}";

      Console.WriteLine(list6.Count());

      DisplayString(list6);
    }

    static void DisplayString(IEnumerable<string> list)
    {
      foreach (string l in list)
      {
        Console.WriteLine(l);
      }
    }
  }
}