#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x294 - 0x260)
// WidgetBlueprintGeneratedClass wi_tutorialwidgetV2.wi_tutorialwidgetV2_C
class UWi_tutorialwidgetV2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                          ButtonProgress;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                Wid_ButtonIndicator;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Widget;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         USeButtonPrressed;                                 // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1137[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PressTime;                                         // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PressDelay;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWi_tutorialwidgetV2_C* GetDefaultObj();

	void InputBackPressed();
	void SetImage(class UClass* Texture);
	void InputAccept();
	void InputAcceptPressed();
	void InputAcceptReleased();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UnlockInput();
	void Lock_Input();
	void ExecuteUbergraph_wi_tutorialwidgetV2(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UClass* K2Node_CustomEvent_Texture, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_Conv_StringToName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2);
};

}


