#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1220 - 0x1218)
// BlueprintGeneratedClass NPC_Biologist.NPC_Biologist_C
class ANPC_Biologist_C : public AGenericQuestNPC_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1218(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ANPC_Biologist_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SetVisibility();
	void ExecuteUbergraph_NPC_Biologist(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsInFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_Not_PreBool_ReturnValue);
};

}


