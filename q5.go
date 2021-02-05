
package main
import "fmt"

func encrypt(plain []byte, key byte) []byte {
	encrypted := make([]byte, len(plain))
	for i := 0; i < len(plain); i++ {
		encrypted[i] = plain[i] ^ key
	}
	return encrypted
}

func decrypt(encrypted []byte, key byte) []byte {
	decrpted := make([]byte, len(encrypted))
	for i := 0; i < len(encrypted); i++ {
		decrpted[i] = encrypted[i] ^ key
	}
	return decrpted
}


func main() {
	key := byte(12)
	encrypted := encrypt([]byte("Encrypt me"), key)
	decrpted := decrypt(encrypted, key)

	fmt.Printf("encrypted: %s\n", encrypted);
	fmt.Printf("decrypted: %s\n", decrpted);
}