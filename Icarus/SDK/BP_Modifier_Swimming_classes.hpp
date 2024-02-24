#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// BlueprintGeneratedClass BP_Modifier_Swimming.BP_Modifier_Swimming_C
class UBP_Modifier_Swimming_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Modifier_Swimming_C* GetDefaultObj();

	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_Modifier_Swimming(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerCharacterState* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaTime);
};

}


