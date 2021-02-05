def search(v)
  v.visit
  v.run
  v.edges.each do |edge|
    search(edge) unless edge.visited?
  end
end

class Edge
  attr_accessor :edges
  def initialize
    @edges = []
    @visited = false
  end
  def visit
    @visited = true
  end
  def visited?
    @visited
  end
  def run; end
end