(declare-project
  :name "lul"
  :dependencies ["jaylib"])


(declare-executable
  :name "lul"
  :entry "lul/main.janet"
  :install true)
