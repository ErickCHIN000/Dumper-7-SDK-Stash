#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2C8 - 0x2A0)
// BlueprintGeneratedClass SEQ_Master_CharacterCustomization.SEQ_Master_CharacterCustomization_C
class ASEQ_Master_CharacterCustomization_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUserWidget*                           W_InGameRef;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_PlayerCamp_C*                      WB_PlayerCamp;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   SequenceRef;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_CharacterCustomization_C*          WB_Char_Customization;                             // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASEQ_Master_CharacterCustomization_C* GetDefaultObj();

	void PlaySEQ();
	void Camera_Form();
	void KillSEQ(bool Skip_Inventory);
	void Camera_Skin();
	void Camera_Head_Morph();
	void Camera_Hair();
	void Camera_Body_Morph();
	void Camera_Cock();
	void ExecuteUbergraph_SEQ_Master_CharacterCustomization(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_InGame_C* CallFunc_Array_Get_Item, class UWB_CharacterCustomization_C* CallFunc_Create_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool K2Node_CustomEvent_Skip_Inventory, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_4, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_5, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_2);
};

}


