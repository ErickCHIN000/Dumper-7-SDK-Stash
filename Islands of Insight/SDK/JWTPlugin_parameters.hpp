#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTGenerator.SetType
struct UJWTGenerator_SetType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTGenerator.SetSubject
struct UJWTGenerator_SetSubject_Params
{
public:
	class FString                                Subject;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function JWTPlugin.JWTGenerator.SetNotBefore
struct UJWTGenerator_SetNotBefore_Params
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTGenerator.SetKeyID
struct UJWTGenerator_SetKeyID_Params
{
public:
	class FString                                KeyID;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTGenerator.SetID
struct UJWTGenerator_SetID_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTGenerator.SetContentType
struct UJWTGenerator_SetContentType_Params
{
public:
	class FString                                ContentType;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTGenerator.SetAudience
struct UJWTGenerator_SetAudience_Params
{
public:
	class FString                                Audience;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function JWTPlugin.JWTGenerator.GenerateToken
struct UJWTGenerator_GenerateToken_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlgorithm                        Algorithm;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IATClaim;                                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                JWT;                                               // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function JWTPlugin.JWTGenerator.ExpireAt
struct UJWTGenerator_ExpireAt_Params
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function JWTPlugin.JWTGenerator.AddHeaderClaims
struct UJWTGenerator_AddHeaderClaims_Params
{
public:
	TMap<class FString, class FString>           Claims;                                            // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function JWTPlugin.JWTGenerator.AddHeaderClaim
struct UJWTGenerator_AddHeaderClaim_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function JWTPlugin.JWTGenerator.AddClaims
struct UJWTGenerator_AddClaims_Params
{
public:
	TMap<class FString, class FString>           Claims;                                            // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function JWTPlugin.JWTGenerator.AddClaim
struct UJWTGenerator_AddClaim_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function JWTPlugin.JWTPluginBPLibrary.GetClaims
struct UJWTPluginBPLibrary_GetClaims_Params
{
public:
	class FString                                JWTToken;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function JWTPlugin.JWTPluginBPLibrary.CreateVerifier
struct UJWTPluginBPLibrary_CreateVerifier_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlgorithm                        Algorithm;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UJWTVerifier*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function JWTPlugin.JWTPluginBPLibrary.CreateGenerator
struct UJWTPluginBPLibrary_CreateGenerator_Params
{
public:
	class UJWTGenerator*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTVerifier.WithSubject
struct UJWTVerifier_WithSubject_Params
{
public:
	class FString                                Subject;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTVerifier.WithIssuer
struct UJWTVerifier_WithIssuer_Params
{
public:
	class FString                                Issuer;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTVerifier.WithID
struct UJWTVerifier_WithID_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function JWTPlugin.JWTVerifier.WithCustomClaim
struct UJWTVerifier_WithCustomClaim_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function JWTPlugin.JWTVerifier.WithAudience
struct UJWTVerifier_WithAudience_Params
{
public:
	class FString                                Audience;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function JWTPlugin.JWTVerifier.VerifyJWT
struct UJWTVerifier_VerifyJWT_Params
{
public:
	class FString                                Input;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function JWTPlugin.JWTVerifier.SetLeeway
struct UJWTVerifier_SetLeeway_Params
{
public:
	int32                                        Leeway;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function JWTPlugin.JWTVerifier.SetAlgorithm
struct UJWTVerifier_SetAlgorithm_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlgorithm                        Algorithm;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


