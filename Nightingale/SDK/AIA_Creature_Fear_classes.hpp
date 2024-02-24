#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Fear.AIA_Creature_Fear_C
class UAIA_Creature_Fear_C : public UAIA_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Fear_C* GetDefaultObj();

	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Start(class AActor* Target);
	void Stop(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Fear(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, class AActor* K2Node_Event_Target_1, class AActor* K2Node_Event_Target, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_1);
};

}


