#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C
class UUMG_CharacterCustomisationContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_BasicButton_2_C*                  BackButton;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             MainDisplayScaleBox;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CharacterCreation_C*              UMG_CharacterCreation;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PlayerPreviewManager_C*            PreviewManager;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 DefaultDiorama;                                    // 0x288(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FCharacterCosmetics                   InitialCosmetics;                                  // 0x2B0(0x34)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5360[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlayerName;                                        // 0x2E8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_CharacterCustomisationContainer_C* GetDefaultObj();

	void OnCustomisationUpdated(const struct FCharacterCosmetics& CharacterData, TScriptInterface<class ICustomisationWidgetInterface_C> K2Node_DynamicCast_AsCustomisation_Widget_Interface, bool K2Node_DynamicCast_bSuccess, const struct FPreviewCameraSettingsEnum& CallFunc_GetCameraFocus_CameraFocus);
	void OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics& Response);
	void OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics& Response);
	void Construct();
	void OnCustomisationCompleted(bool Success, const struct FOnlineProfileCharacter& NewCharacterInfo);
	void OnCosmeticUpdateRequest(const struct FReqUpdateCosmetics& Request, int32 Retries);
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void ExecuteUbergraph_UMG_CharacterCustomisationContainer(int32 EntryPoint, const struct FCharacterCosmetics& K2Node_MakeStruct_CharacterCosmetics, const struct FResUpdateCosmetics& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResUpdateCosmetics& Temp_struct_Variable, bool Temp_bool_Variable, class ABP_PlayerPreviewManager_C* CallFunc_GetActorOfClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Success, const struct FOnlineProfileCharacter& K2Node_CustomEvent_NewCharacterInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FResUpdateCosmetics& K2Node_CustomEvent_Response_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FReqUpdateCosmetics& K2Node_CustomEvent_Request, int32 K2Node_CustomEvent_Retries, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUpdateCosmeticsCallbackProxyGen* CallFunc_UpdateCosmetics_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FCharacterCosmetics& K2Node_Select_Default);
};

}


