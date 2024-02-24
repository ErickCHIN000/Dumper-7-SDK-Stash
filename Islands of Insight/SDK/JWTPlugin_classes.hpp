#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class JWTPlugin.JWTGenerator
class UJWTGenerator : public UObject
{
public:
	uint8                                        Pad_31B[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJWTGenerator* GetDefaultObj();

	void SetType(const class FString& Type);
	void SetSubject(const class FString& Subject);
	void SetNotBefore(int32 Seconds);
	void SetKeyID(const class FString& KeyID);
	void SetID(const class FString& ID);
	void SetContentType(const class FString& ContentType);
	void SetAudience(const class FString& Audience);
	void GenerateToken(const class FString& Key, enum class EAlgorithm Algorithm, bool IATClaim, class FString* JWT);
	void ExpireAt(int32 Seconds);
	void AddHeaderClaims(TMap<class FString, class FString> Claims);
	void AddHeaderClaim(const class FString& Name, const class FString& Value);
	void AddClaims(TMap<class FString, class FString> Claims);
	void AddClaim(const class FString& Name, const class FString& Value);
};

// 0x0 (0x28 - 0x28)
// Class JWTPlugin.JWTPluginBPLibrary
class UJWTPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UJWTPluginBPLibrary* GetDefaultObj();

	TMap<class FString, class FString> GetClaims(const class FString& JWTToken);
	class UJWTVerifier* CreateVerifier(const class FString& Key, enum class EAlgorithm Algorithm);
	class UJWTGenerator* CreateGenerator();
};

// 0x90 (0xB8 - 0x28)
// Class JWTPlugin.JWTVerifier
class UJWTVerifier : public UObject
{
public:
	uint8                                        Pad_3E5[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UJWTVerifier* GetDefaultObj();

	void WithSubject(const class FString& Subject);
	void WithIssuer(const class FString& Issuer);
	void WithID(const class FString& ID);
	void WithCustomClaim(const class FString& Name, const class FString& Value);
	void WithAudience(const class FString& Audience);
	bool VerifyJWT(const class FString& Input);
	void SetLeeway(int32 Leeway);
	void SetAlgorithm(const class FString& Key, enum class EAlgorithm Algorithm);
};

}


