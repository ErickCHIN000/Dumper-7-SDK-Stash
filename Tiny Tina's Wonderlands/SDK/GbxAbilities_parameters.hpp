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

// 0x1 (0x1 - 0x0)
// Function GbxAbilities.GbxAbility.IsReplicated
struct UGbxAbility_IsReplicated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxAbilities.GbxAbility.GetAbilityOwner
struct UGbxAbility_GetAbilityOwner_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxAbilities.GbxAbility.CalculateAbilityState
struct UGbxAbility_CalculateAbilityState_Params
{
public:
	enum class EGbxAbilityState                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxAbilities.GbxAbilityManagerComponent.RemoveAbility
struct UGbxAbilityManagerComponent_RemoveAbility_Params
{
public:
	TSubclassOf<class UGbxAbility>               AbilityClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxAbilities.GbxAbilityManagerComponent.HasAbility
struct UGbxAbilityManagerComponent_HasAbility_Params
{
public:
	TSubclassOf<class UGbxAbility>               AbilityClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B09[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxAbilities.GbxAbilityManagerComponent.FindAbility
struct UGbxAbilityManagerComponent_FindAbility_Params
{
public:
	TSubclassOf<class UGbxAbility>               AbilityClass;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAbility*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxAbilities.GbxAbilityManagerComponent.AddAbility
struct UGbxAbilityManagerComponent_AddAbility_Params
{
public:
	struct FGbxAbilitySpec                       Spec;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UGbxAbility*                           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterResourcePoolDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterResourcePoolDelegate_Params
{
public:
	struct FGbxAbilityResourceController_ResourcePoolDelegate Controller;                                        // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec;                                              // 0x28(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterConditionalDamageModifier
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterConditionalDamageModifier_Params
{
public:
	struct FGbxAbilityResourceController_ConditionalDamageModifier Controller;                                        // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec;                                              // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.UnregisterAbilityDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_UnregisterAbilityDelegate_Params
{
public:
	struct FGbxAbilityResourceController_ScriptDelegate Controller;                                        // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGbxAbilityResourceSpec_ScriptDelegate Spec;                                              // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterResourcePoolDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterResourcePoolDelegate_Params
{
public:
	struct FGbxAbilityResourceController_ResourcePoolDelegate Controller;                                        // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGbxAbilityResourceSpec_ResourcePoolDelegate Spec;                                              // 0x28(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterConditionalDamageModifier
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterConditionalDamageModifier_Params
{
public:
	struct FGbxAbilityResourceController_ConditionalDamageModifier Controller;                                        // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGbxAbilityResourceSpec_ConditionalDamageModifier Spec;                                              // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary.RegisterAbilityDelegate
struct UGbxAbilityResourceControllerBlueprintFunctionLibrary_RegisterAbilityDelegate_Params
{
public:
	struct FGbxAbilityResourceController_ScriptDelegate Controller;                                        // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FGbxAbilityResourceSpec_ScriptDelegate Spec;                                              // 0x28(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}


