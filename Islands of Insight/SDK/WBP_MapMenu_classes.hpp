#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCC (0x3FC - 0x330)
// WidgetBlueprintGeneratedClass WBP_MapMenu.WBP_MapMenu_C
class UWBP_MapMenu_C : public UMapMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      DelayVisiblity;                                    // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_DelayedWidgetGenerator_C*         OneQuestsDeprecated;                               // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DelayedWidgetGenerator_C*         TwoUpgrades;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DelayedWidgetGenerator_C*         ThreeMastery;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DelayedWidgetGenerator_C*         FourEncyclopedia;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DelayedWidgetGenerator_C*         FiveWardrobe;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BGColor;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EncyclopediaBackground_C*         EncyclopediaBackground;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              HorizontalRadioSelect;                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_129;                                         // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MasteryBackground_C*              MasteryBackground;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MenuBlackTransition_C*            MenuTransition;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UpgradeBackground_C*              UpgradeBackground;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LocalPlayerWidgetMap_C*           WBP_LocalPlayerWidgetMap;                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerProfileCustomization_C*     WBP_PlayerProfileCustomization;                    // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TabBACKButton_C*                  WBP_TabBACKButton;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bInConquest;                                       // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USophiaGameInstance*                   GI;                                                // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClosed;                                          // 0x3D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOpenCustomization;                               // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        ResolutionQualityCache;                            // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MapMenu_C* GetDefaultObj();

	void SelectTabButton(int32 TabIndex, const class FString& CallFunc_Conv_IntToString_ReturnValue);
	void SwitchTab(int32 TabIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CineCamera_C* K2Node_DynamicCast_AsBP_Cine_Camera, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_1, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map, bool K2Node_DynamicCast_bSuccess_2, class UWBP_MasteryList_C* K2Node_DynamicCast_AsWBP_Mastery_List, bool K2Node_DynamicCast_bSuccess_3, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2, bool K2Node_DynamicCast_bSuccess_4, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2_1, bool K2Node_DynamicCast_bSuccess_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UDelayedWidgetGenerator* K2Node_DynamicCast_AsDelayed_Widget_Generator, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_BooleanAND_ReturnValue);
	void SetWardrobeOwner();
	void SwapToUpgrades();
	void StartCollapased();
	void SwapToMasteries();
	void SwapToMap();
	void SwapToWardrobe();
	void OnMapMenuClose();
	void SwapToInsights();
	void SwapToLore();
	void BndEvt__WBP_MapMenu_WBP_LocalPlayerWidgetMap_K2Node_ComponentBoundEvent_2_OnClickedTitle__DelegateSignature();
	void OnReopen();
	void BackButtonClicked();
	void BndEvt__WBP_LargeMapView_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void Construct();
	void OnExitClicked();
	void SwapToMapOrClose();
	void SwapToUpgradesOrClose();
	void SwapToMasteriesOrClose();
	void SwapToEncyclopediaOrClose();
	void SwapToWardrobeOrClose();
	void BndEvt__WBP_MapMenu_WBP_PlayerProfileCustomization_K2Node_ComponentBoundEvent_1_CloseTitle__DelegateSignature();
	void SwapToMysteries();
	void RefreshSandboxModal();
	void SwapToEncyclopedia();
	void ExecuteUbergraph_WBP_MapMenu(int32 EntryPoint, enum class EMapSubMenu Temp_byte_Variable, enum class EMapSubMenu Temp_byte_Variable_1, enum class EMapSubMenu Temp_byte_Variable_2, enum class EMapSubMenu Temp_byte_Variable_3, enum class EMapSubMenu Temp_byte_Variable_4, enum class EMapSubMenu Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Add_FloatFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetValue_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 Temp_int_Variable, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia, bool K2Node_DynamicCast_bSuccess_1, enum class EMapSubMenu K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Add_FloatFloat_ReturnValue_2, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_2, bool K2Node_DynamicCast_bSuccess_3, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_3, bool K2Node_DynamicCast_bSuccess_4, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map, bool K2Node_DynamicCast_bSuccess_5, class UWBP_MasteryList_C* K2Node_DynamicCast_AsWBP_Mastery_List, bool K2Node_DynamicCast_bSuccess_6, const class FString& K2Node_ComponentBoundEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue_1, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2, bool K2Node_DynamicCast_bSuccess_7, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UWBP_CharacterCreation2_C* K2Node_DynamicCast_AsWBP_Character_Creation_2_1, bool K2Node_DynamicCast_bSuccess_8, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue, class UWBP_MapTutorial_C* K2Node_DynamicCast_AsWBP_Map_Tutorial, bool K2Node_DynamicCast_bSuccess_10, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map_1, bool K2Node_DynamicCast_bSuccess_11, class UWBP_MasteryList_C* K2Node_DynamicCast_AsWBP_Mastery_List_1, bool K2Node_DynamicCast_bSuccess_12, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map_2, bool K2Node_DynamicCast_bSuccess_13, float CallFunc_Add_FloatFloat_ReturnValue_3, class UWBP_Encyclopedia_C* K2Node_DynamicCast_AsWBP_Encyclopedia_4, bool K2Node_DynamicCast_bSuccess_14, class UWBP_LargeMap_C* K2Node_DynamicCast_AsWBP_Large_Map_3, bool K2Node_DynamicCast_bSuccess_15, int32 CallFunc_GetIntCVar_ReturnValue);
	void OnOpenCustomization__DelegateSignature();
	void OnClosed__DelegateSignature();
};

}


