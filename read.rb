start_time = Time.now.to_f

if File.read("./lists.csv").include?("123.194.235.37")
    # do something
end

end_time = Time.now.to_f

puts "[ruby] File check finished in #{(end_time - start_time) * 1000} ms"
