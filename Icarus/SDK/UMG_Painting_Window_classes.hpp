#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2E0 - 0x280)
// WidgetBlueprintGeneratedClass UMG_Painting_Window.UMG_Painting_Window_C
class UUMG_Painting_Window_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_IconTextButton_C*                 ConfirmButton;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             ListView_ItemIcons;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_Painting_Base_C*                   PaintingReference;                                 // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPaintingListItem*>             PaintingListItems;                                 // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UObject>                PaintingImage;                                     // 0x2B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Painting_Window_C* GetDefaultObj();

	void UpdateIconList(TArray<class UObject*>& Items, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ProxyUpdateIcon(const struct FPaintingsRowHandle& PaintingRow, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class ABP_Painting_Base_C* K2Node_DynamicCast_AsBP_Painting_Base, bool K2Node_DynamicCast_bSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess);
	void GenerateItemList(TArray<struct FPaintingsRowHandle>* ValidPaintings, bool Found, const struct FItemData& ItemData, const TArray<struct FPaintingsRowHandle>& Output, int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FPaintingsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPaintingsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FPaintingData& CallFunc_GetPaintingsStruct_Paintings, enum class EValid CallFunc_GetPaintingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void Construct();
	void BndEvt__UMG_Sign_Text_Window_ConfirmButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_Painting_Window(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_Painting_Base_C* K2Node_DynamicCast_AsBP_Painting_Base, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FPaintingsRowHandle>& CallFunc_GenerateItemList_ValidPaintings, class UPaintingListItem* CallFunc_SpawnObject_ReturnValue, const struct FPaintingsRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UPaintingListItem* K2Node_DynamicCast_AsPainting_List_Item, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue);
};

}


