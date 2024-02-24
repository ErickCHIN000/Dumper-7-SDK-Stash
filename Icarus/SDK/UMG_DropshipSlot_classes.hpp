#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x269 (0x4C9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DropshipSlot.UMG_DropshipSlot_C
class UUMG_DropshipSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_CloseButton_2_C*                  ClearButton;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Empty;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SlotPosition;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             CurrentItem;                                       // 0x288(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayTagQuery                     Query;                                             // 0x478(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UUMG_DropshipEditor_Dropship_C*        EditorDropship;                                    // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDropshipPartType                 Part;                                              // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_DropshipSlot_C* GetDefaultObj();

	void Initialise(class UUMG_DropshipEditor_Dropship_C* Parent, enum class EDropshipPartType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default);
	void UpdateState(class UUMG_ItemPopup_C* CallFunc_Create_ReturnValue, bool CallFunc_Show_for_Item_Shown, const struct FRocketableData& CallFunc_GetRocketableData_Rocketable, enum class EDataValid CallFunc_GetRocketableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Update(const struct FItemData& Item);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusController* K2Node_DynamicCast_AsIcarus_Controller, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_CursorWidget_C* CallFunc_GetCursorWidget_CursorWidget, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	void OnLoaded_95C42B9A4E4569F2B77ACA92D0F18F50(class UObject* Loaded);
	void LoadIcon(TSoftObjectPtr<class UTexture2D> Texture);
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_DropshipSlot(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_Texture, enum class EDataValid CallFunc_ItemDataValid_Paths, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


