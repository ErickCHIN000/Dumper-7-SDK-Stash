#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x43 (0x2C8 - 0x285)
// WidgetBlueprintGeneratedClass InstructionsNotifyWidget.InstructionsNotifyWidget_C
class UInstructionsNotifyWidget_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1B72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                SmallImage;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    Player;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         JPressed;                                          // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JPressTime;                                        // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PressJTimeMaxToHide;                               // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoldJTimeToOpenJournal;                            // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TH_PressJ;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  InstructionKey;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInstructionsNotifyWidget_C* GetDefaultObj();

	void OpenJournal(TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUIInterface_C> CallFunc_BPI_Get_Character_UI_CharacterUI);
	void ShowNotify(class FName ID, bool CallFunc_IsValid_ReturnValue, const struct FInstructionsInfoData& CallFunc_GetInstructionData_result, bool CallFunc_GetInstructionData_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnJPressed();
	void OnJReleased();
	void OnShowTutorial_Event_0(class FName InstructionID);
	void OnHidden();
	void ExecuteUbergraph_InstructionsNotifyWidget(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FName K2Node_CustomEvent_InstructionID, bool CallFunc_IsValid_ReturnValue);
};

}


