#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x410 - 0x408)
// BlueprintGeneratedClass Action_SpellThrow_Push_GlacialCascade.Action_SpellThrow_Push_GlacialCascade_C
class UAction_SpellThrow_Push_GlacialCascade_C : public UAction_SpellThrow_Push_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_SpellThrow_Push_GlacialCascade_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void SpellCast();
	void ExecuteUbergraph_Action_SpellThrow_Push_GlacialCascade(int32 EntryPoint, class AActor* K2Node_Event_Actor, enum class EOakElementalType CallFunc_GetSpellElement_ReturnedElement, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


