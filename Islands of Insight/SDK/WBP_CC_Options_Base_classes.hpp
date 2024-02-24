#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass WBP_CC_Options_Base.WBP_CC_Options_Base_C
class UWBP_CC_Options_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CC_Options_GridScroll_New_C*      WBP_CC_Options_GridScroll_New;                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bChangedValue;                                     // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsDynamicIcon;                                    // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bOverlayColor;                                     // 0x272(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Use_Index;                                         // 0x273(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Creation;                                       // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bWaitInit;                                         // 0x275(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1499[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Customization_Id;                                  // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ECustomizationTypes               CustomizationType;                                 // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_149F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentEquipValue;                                 // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Columns;                                           // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Rows;                                              // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LastSetVal;                                        // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Type_Index;                                        // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ImageX;                                            // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ImageY;                                            // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        ImageRatio;                                        // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_14AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USophiaGameInstance*                   GameInstance;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSlateBrush>                   Image_Texture_Array;                               // 0x2B8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnValueChangedDummy;                               // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CharacterCreation2_C*             CustomizationWidget;                               // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFirstPersonCharacter_C*               PlayerRef;                                         // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCC_Button_C*                          Button;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ButtonClickEvent;                                  // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_Options_Base_C* GetDefaultObj();

	void ResetCurrentEquipIndex(uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2);
	class UObject* GetOuterObject(class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetOuterObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetOuterObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3);
	void GetIsCreation(bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleSelectionChanged(class UCC_Button_C* Button);
	void GetCostumeIcons(TArray<struct FCostume>& Array, TArray<class UTexture2D*>* OutTex, TArray<class FString>* OutIds, const TArray<class FString>& IDs, const TArray<class UTexture2D*>& Icons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FCostume& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Init(int32 Val, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1);
	void Construct();
	void OnConfirm();
	void OnButtonClicked(bool Locked, int32 Val, class UCC_Button_C* Button);
	void OnChangedValueDummy(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void OnChangedValue(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void OnCancel();
	void UpdateWidget();
	void InitWidget(bool bIsDynamicIcon, bool bOverlayColor, enum class ECustomizationTypes CustomizationType, int32 TypeIndex, int32 Columns, int32 Rows, float ImageX, float ImageY);
	void Reinit();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_CC_Options_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_CustomEvent_Locked, int32 K2Node_CustomEvent_Val_2, class UCC_Button_C* K2Node_CustomEvent_Button, class UObject* K2Node_CustomEvent_Object_1, int32 K2Node_CustomEvent_Val_1, bool K2Node_CustomEvent_bUseIndex_1, const class FString& K2Node_CustomEvent_ID_1, class UObject* K2Node_CustomEvent_Object, int32 K2Node_CustomEvent_Val, bool K2Node_CustomEvent_bUseIndex, const class FString& K2Node_CustomEvent_ID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IBPI_CharacterCustomization_C> K2Node_DynamicCast_AsBPI_Character_Customization, bool K2Node_DynamicCast_bSuccess, class UWBP_CharacterCreation2_C* CallFunc_GetCustomizationWidget_Return, int32 CallFunc_SelectInt_ReturnValue, bool K2Node_CustomEvent_bIsDynamicIcon, bool K2Node_CustomEvent_bOverlayColor, enum class ECustomizationTypes K2Node_CustomEvent_CustomizationType, int32 K2Node_CustomEvent_TypeIndex, int32 K2Node_CustomEvent_Columns, int32 K2Node_CustomEvent_Rows, float K2Node_CustomEvent_ImageX, float K2Node_CustomEvent_ImageY, class UObject* CallFunc_GetOuterObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnValueChanged__DelegateSignature(class UObject* Object, int32 Val, bool bUseIndex, const class FString& ID);
	void OnValueChangedDummy__DelegateSignature(class UObject* Object, int32 Val, bool UseIndex, const class FString& ID);
};

}


