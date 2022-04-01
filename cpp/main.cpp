#include <iostream>

#include "encryption.h"

int main() {
    encryption::rsa rsa;

    const std::string public_key = "-----BEGIN PUBLIC KEY-----\n"
                                   "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAwfyAwTIbp2mJ+TrokJ7r\n"
                                   "bEfIGUIuj0T3sy8am3HHQ31TC8cuL5KuU827KqyzLSEMBiha/rbg+26xtCGMx0WU\n"
                                   "Bu/2fHDifxlbA6PRuJrc6JhuWB/BxpqpjjObX0zQZ82R9bJcxG8k4GRPCUbOtoks\n"
                                   "+TVwuP6tN8BBt9JtXoSAKABS9lBGjR/5naSZ3nzv2owZC0C0EO30S1MW8XJ9vxpx\n"
                                   "haEjjb/N10wyfuKdnNOorgMMuk0Re9ilEN4owaqL48Y+lXCLPoeERKGKQa/ytjtv\n"
                                   "E7iAXOmEJJE+bzubww9rBJPyk65Pt9wa+jQzHhzW/jcluOxpE/ZVBO/UWlUKGHrH\n"
                                   "5QIDAQAB\n"
                                   "-----END PUBLIC KEY-----";
    const std::string private_key = "-----BEGIN RSA PRIVATE KEY-----\n"
                                    "MIIEpAIBAAKCAQEAwfyAwTIbp2mJ+TrokJ7rbEfIGUIuj0T3sy8am3HHQ31TC8cu\n"
                                    "L5KuU827KqyzLSEMBiha/rbg+26xtCGMx0WUBu/2fHDifxlbA6PRuJrc6JhuWB/B\n"
                                    "xpqpjjObX0zQZ82R9bJcxG8k4GRPCUbOtoks+TVwuP6tN8BBt9JtXoSAKABS9lBG\n"
                                    "jR/5naSZ3nzv2owZC0C0EO30S1MW8XJ9vxpxhaEjjb/N10wyfuKdnNOorgMMuk0R\n"
                                    "e9ilEN4owaqL48Y+lXCLPoeERKGKQa/ytjtvE7iAXOmEJJE+bzubww9rBJPyk65P\n"
                                    "t9wa+jQzHhzW/jcluOxpE/ZVBO/UWlUKGHrH5QIDAQABAoIBAE5BVJebZTiGBNj8\n"
                                    "ALHGymYmFvzJjArT4bDxQaSPo7kAJ65KrcEXRSgdiHHQtX9xI26gfQTgNaZ4o0tt\n"
                                    "dWM2GF8sEp1k1Jo9Wk//mC0GnDNgurLmLL+3yMrK2tT5IeGeNlGNoIrF43R6QsAV\n"
                                    "RnKwp+nouw6F/s7MyjYjt2c3wJNhygyekou7LHPbCzXpPUxDz9LvrLr/ktCZWujl\n"
                                    "dI02SLbF8Sq58i1RQyD2KMKU3sCpbhGFz2iqVwjUsmK4/ooMsZyh2pQFkN+LDtWC\n"
                                    "MkXYcE7b0cdkyzkRWXzNKwj/rkywE0wBgczWXeWX/w/BwU/+uDZAbLh+I6/DjiI5\n"
                                    "IqWtgAECgYEA6qJS8EPKoOf8ROLctatDS7URJnkL1ZnE/5NkC1eTyuMxeHkD731b\n"
                                    "IchyueC481/UTvO/nm5cbnJWGJiwZxHkE0ockJrPw5x3x0knxYwFzk2UnrlWYstT\n"
                                    "wBunIxE2z+QqubZX7KwFenxEX2osJyNQN8hTtDakFBu5kHSiL7Ivl+UCgYEA06ae\n"
                                    "WsbFJSC30IKBlBY2xXx1PETH0pVRU0iYZY7okQMCJ12sz/gv7FdMaeVMrdqfnniH\n"
                                    "IId+bIrbsYEeOt4hWDD522c8daQxmejHAIaUJvzUJSgcS0v8/8SOI+2GgCpcjo8D\n"
                                    "Z7rARXjJVxqhaUmeF3h7ZW93+hcY9yHgRwkLcAECgYEAzj1cdcDA7Wq8vbhDlJQz\n"
                                    "lOpVZuHjWx/Mn3Ho8GdMi3vkUibdJLelUS6mWWiEabiEH9n1RsdvC84Ii5o7BH4f\n"
                                    "Yi00qo7JrQFt74gII4aO2+YpitMScciTlzs3UIWjDl1aiN8Urf4O2rk8SDpFESnj\n"
                                    "KwU1PiUBWIN+OtGqdg5D81kCgYAnL8RF/mNl+mbOHjurlWlSqzZxkDKHFMpX5ysA\n"
                                    "MrNwleQCMd/bKZKF6avmN2Q5FC9Vge9S4INRyWvfs45LS/FUiMzaCIUzKtFcM7MU\n"
                                    "r9YiWdFVh9WlQ052dIf0sveiJzW311bED9mlgzWUAQQ9oDm7Er2WDEtkbH5c01LZ\n"
                                    "FB2gAQKBgQCCg5AsH5n7NROSdgTPlsZWwy8ieruVQa9ocF76rW8K3zwev+SgJHwK\n"
                                    "SIGAp86aIepMx+KbaBmqbqTv8klP9eB3pSCRlyHyW5BdgTAMktz+5SkBBQQqGlFj\n"
                                    "/4vqMIXcQkjyVLayIGeEvzlmwHULCpnUrtVrp2u3u3kX/jA9wy7V7g==\n"
                                    "-----END RSA PRIVATE KEY-----";

    rsa.read_public_key_buffer(const_cast<char *>(public_key.data()), public_key.size());
    rsa.read_private_key_buffer(const_cast<char *>(private_key.data()), private_key.size());

    std::string text = "test";
    std::string encrypted = rsa.easy_public_encrypt(text);
    std::string decrypted = rsa.easy_private_decrypt(encrypted);

    std::cout
    << encrypted
    << std::endl << std::string(25, '=') << std::endl
    << decrypted
    ;
}
