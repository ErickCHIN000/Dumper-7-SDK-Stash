#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x100 - 0x28)
// Class GbxAbilities.GbxAbility
class UGbxAbility : public UObject
{
public:
	uint8                                        Pad_AC0[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AbilityName;                                       // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  AbilityDescription;                                // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ShortAbilityDescription;                           // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGbxAbilityEffect>             AbilityEffects;                                    // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC4[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbilityManagerComponent*           Manager;                                           // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxAbilityDurationType           DurationType;                                      // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AC8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0xB4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxAbilityState                  DesiredAbilityState;                               // 0xB8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EGbxAbilityState                  AbilityState;                                      // 0xB9(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxAbilityEffectInstance>     AbilityEffectInstances;                            // 0xC0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbilityManagerComponent*           PendingManager;                                    // 0xE0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ACF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGbxAbility* GetDefaultObj();

	void OnUnregistered();
	void OnResumed();
	void OnRep_Manager();
	void OnRep_AbilityState();
	void OnRegistered();
	void OnPaused();
	void OnForcedRefresh();
	void OnDeactivated();
	void OnActivated();
	bool IsReplicated();
	class AActor* GetAbilityOwner();
	void Client_Deactivate();
	enum class EGbxAbilityState CalculateAbilityState();
};

// 0x0 (0x30 - 0x30)
// Class GbxAbilities.GbxAbilityEffectTargetResolutionData
class UGbxAbilityEffectTargetResolutionData : public UGbxDataAsset
{
public:

	static class UClass* StaticClass();
	static class UGbxAbilityEffectTargetResolutionData* GetDefaultObj();

};

// 0xD0 (0x248 - 0x178)
// Class GbxAbilities.GbxAbilityManagerComponent
class UGbxAbilityManagerComponent : public UActorComponent
{
public:
	uint8                                        Pad_B32[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGbxAbility*>                   Abilities;                                         // 0x1A8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UGbxAbility*>                   ReplicatedAbilities;                               // 0x1B8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UGbxAbility*>                   PendingReplicatedAbilities;                        // 0x1C8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UGbxAbility>, class UGbxAbility*> RegisteredAbilities;                               // 0x1D8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	struct FGbxAbilityManagerComponentListLock   ListLock;                                          // 0x228(0x20)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxAbilityManagerComponent* GetDefaultObj();

	bool RemoveAbility(TSubclassOf<class UGbxAbility> AbilityClass);
	bool HasAbility(TSubclassOf<class UGbxAbility> AbilityClass);
	class UGbxAbility* FindAbility(TSubclassOf<class UGbxAbility> AbilityClass);
	class UGbxAbility* AddAbility(struct FGbxAbilitySpec& Spec);
};

// 0x28 (0xD8 - 0xB0)
// Class GbxAbilities.GbxAbilityAttributePropertyValueResolver
class UGbxAbilityAttributePropertyValueResolver : public UAttributePropertyValueResolver
{
public:
	TSoftClassPtr<class UGbxAbility>             GbxAbilityClass;                                   // 0xB0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGbxAbilityAttributePropertyValueResolver* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Owner
class UGbxAbilityEffectTargetResolutionData_Owner : public UGbxAbilityEffectTargetResolutionData
{
public:

	static class UClass* StaticClass();
	static class UGbxAbilityEffectTargetResolutionData_Owner* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Self
class UGbxAbilityEffectTargetResolutionData_Self : public UGbxAbilityEffectTargetResolutionData
{
public:

	static class UClass* StaticClass();
	static class UGbxAbilityEffectTargetResolutionData_Self* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary
class UGbxAbilityResourceControllerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGbxAbilityResourceControllerBlueprintFunctionLibrary* GetDefaultObj();

	void UnregisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate& Controller, struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec);
	void UnregisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier& Controller, struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec);
	void UnregisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate& Controller, struct FGbxAbilityResourceSpec_ScriptDelegate& Spec);
	void RegisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate& Controller, struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec);
	void RegisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier& Controller, struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec);
	void RegisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate& Controller, struct FGbxAbilityResourceSpec_ScriptDelegate& Spec);
};

// 0x8 (0x90 - 0x88)
// Class GbxAbilities.GbxCondition_HasAbility
class UGbxCondition_HasAbility : public UGbxCondition
{
public:
	TSubclassOf<class UGbxAbility>               AbilityClass;                                      // 0x88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGbxCondition_HasAbility* GetDefaultObj();

};

}


