#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAbilityResourceDelegateType : uint8
{
	None                           = 0,
	OnResourceNowDepleted          = 1,
	OnResourceNowNotDepleted       = 2,
	OnResourceNowFilled            = 3,
	OnResourceNowNotFilled         = 4,
	OnResourceNowRegenerating      = 5,
	OnResourceNowNotRegenerating   = 6,
	OnResourceNowDepleting         = 7,
	OnResourceNowNotDepleting      = 8,
	OnResourceNowIdle              = 9,
	EAbilityResourceDelegateType_MAX = 10,
};

enum class EGbxAbilityNetTypeSpec : uint8
{
	None                           = 0,
	OwnerOnly                      = 1,
	Everyone                       = 2,
	EGbxAbilityNetTypeSpec_MAX     = 3,
};

enum class EGbxAbilityState : uint8
{
	Unactivated                    = 0,
	Deactivated                    = 1,
	Paused                         = 2,
	Active                         = 3,
	EGbxAbilityState_MAX           = 4,
};

enum class EGbxAbilityDurationType : uint8
{
	Timed                          = 0,
	Indefinite                     = 1,
	Infinite                       = 2,
	EGbxAbilityDurationType_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityResourceController
struct FGbxAbilityResourceController
{
public:
	uint8                                        Pad_BEA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbility*                           Owner;                                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BEB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityResourceSpec
struct FGbxAbilityResourceSpec
{
public:
	class UGbxAbility*                           AbilityContext;                                    // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWhenActive;                                       // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWhenPaused;                                       // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF0[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityEffectInstanceTarget
struct FGbxAbilityEffectInstanceTarget
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffectManagerComponent*         TargetStatusEffectManagerComponent;                // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatusEffectInstanceReference        StatusEffectInstanceReference;                     // 0x10(0x18)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityEffectInstance
struct FGbxAbilityEffectInstance
{
public:
	class UGbxAbility*                           Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatusEffectSpec                     StatusEffectSpec;                                  // 0x8(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGbxAbilityEffectInstanceTarget> Targets;                                           // 0x40(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxAbilityEffectTargetResolutionData*> TargetResolutionStrategies;                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C00[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityEffect
struct FGbxAbilityEffect
{
public:
	class UStatusEffectData*                     StatusEffectData;                                  // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UGbxAbilityEffectTargetResolutionData*> TargetResolutionStrategies;                        // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x18(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilitySpec
struct FGbxAbilitySpec
{
public:
	TSubclassOf<class UGbxAbility>               AbilityClass;                                      // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAbilityDurationType           DurationType;                                      // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationInitializerData;                           // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAbilityNetTypeSpec            NetTypeOverride;                                   // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityManagerComponentDeferredOperation
struct FGbxAbilityManagerComponentDeferredOperation
{
public:
	uint8                                        Pad_C14[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAbilitySpec                       AddSpec;                                           // 0x8(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_C15[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxAbility>               RemoveSpec;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxAbilities.GbxAbilityManagerComponentListLock
struct FGbxAbilityManagerComponentListLock
{
public:
	class UGbxAbilityManagerComponent*           Owner;                                             // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGbxAbilityManagerComponentDeferredOperation> DeferredOps;                                       // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C19[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x28 - 0x18)
// ScriptStruct GbxAbilities.GbxAbilityResourceController_ConditionalDamageModifier
struct FGbxAbilityResourceController_ConditionalDamageModifier : public FGbxAbilityResourceController
{
public:
	uint8                                        Pad_C1F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x28 - 0x10)
// ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ConditionalDamageModifier
struct FGbxAbilityResourceSpec_ConditionalDamageModifier : public FGbxAbilityResourceSpec
{
public:
	class UDamageBaseComponent*                  DamageComponent;                                   // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConditionalDamageModifier*            DamageModifier;                                    // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextOverride;                                   // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct GbxAbilities.GbxAbilityResourceController_ResourcePoolDelegate
struct FGbxAbilityResourceController_ResourcePoolDelegate : public FGbxAbilityResourceController
{
public:
	uint8                                        Pad_C27[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x30 - 0x10)
// ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ResourcePoolDelegate
struct FGbxAbilityResourceSpec_ResourcePoolDelegate : public FGbxAbilityResourceSpec
{
public:
	class UGameResourcePoolManagerComponent*     ResourcePoolComponent;                             // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourcePoolData*                 ResourcePoolData;                                  // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAbilityResourceDelegateType      DelegateType;                                      // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDelegateProperty*                     DelegateEventProperty;                             // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct GbxAbilities.GbxAbilityResourceController_ScriptDelegate
struct FGbxAbilityResourceController_ScriptDelegate : public FGbxAbilityResourceController
{
public:
	uint8                                        Pad_C32[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x28 - 0x10)
// ScriptStruct GbxAbilities.GbxAbilityResourceSpec_ScriptDelegate
struct FGbxAbilityResourceSpec_ScriptDelegate : public FGbxAbilityResourceSpec
{
public:
	class UObject*                               TargetContext;                                     // 0x10(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMulticastDelegateProperty*            TargetProperty;                                    // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDelegateProperty*                     DelegateEventProperty;                             // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


