#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E (0x360 - 0x312)
// BlueprintGeneratedClass Usable_Cat.Usable_Cat_C
class AUsable_Cat_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_11F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class ALevelSequenceActor>    CatCutscene;                                       // 0x320(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseHardRef;                                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   CatCutscene_HardRef;                               // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Cat_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success);
	void PlayCutscene();
	void CutsceneFinished();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Usable_Cat(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1);
};

}


