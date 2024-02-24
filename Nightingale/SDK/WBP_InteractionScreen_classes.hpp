#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x421 - 0x3C0)
// WidgetBlueprintGeneratedClass WBP_InteractionScreen.WBP_InteractionScreen_C
class UWBP_InteractionScreen_C : public UNWXWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image;                                             // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_5;                                           // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ANWXPlayerController*                  PlayerController;                                  // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AStructureConstructedBase*             Structure;                                         // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Single_Point_Interaction;                          // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMeshComponent*>                CacheStructureMeshes;                              // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UImage*>                        Interaction_Dots;                                  // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         bIsStructureCompleted;                             // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_InteractionScreen_C* GetDefaultObj();

	void ResetInteractionDots(class UImage* Current_Interaction_Dot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> CallFunc_GetStructureEventsObject_self_CastInput, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void OnStructureDestroyed(class UObject* Structure, class AActor* Instigator);
	void OnInteractableRemoved(class AActor* InteractableActor, class UObject* InteractableObject, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnInteractableAdded(class AActor* InteractableActor, class UObject* InteractableObject, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEventInterface> CallFunc_GetStructureEventsObject_self_CastInput, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AStructureConstructedBase* K2Node_DynamicCast_AsStructure_Constructed_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void Update_Screen_Coordinates(const struct FVector2D& LScreenCoordinates, int32 LMeshIndex, class UImage* LInteractionDot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UImage* CallFunc_Array_Get_Item, class UMeshComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureMeshInfoInterface> K2Node_DynamicCast_AsStructure_Mesh_Info_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition_1, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue_1);
	void UpdateInteractionDots(bool CallFunc_IsValid_ReturnValue);
	void OnStructureStateUpdated(const struct FVector2D& Current_Screen_Coordinates, class UObject* Current_Interaction_Dot, enum class EStructureInteractionType Temp_byte_Variable, TScriptInterface<class IStructureStateInterface> CallFunc_GetIsStructureComplete_self_CastInput, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class UMeshComponent*>& CallFunc_GetStructureMeshes_ReturnValue, bool CallFunc_GetPostConstructionInteractionData_IsValid, class UStructurePostConstructionInteractionData* CallFunc_GetPostConstructionInteractionData_OutPostConstructionInteractionData, const struct FStructureData_Interaction& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_WBP_InteractionScreen(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IControllerInteractionInterface> CallFunc_BindEventTo_OnNearbyInteractableRemoved_self_CastInput, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IControllerInteractionInterface> CallFunc_BindEventTo_OnNearbyInteractableAdded_self_CastInput, TArray<class UImage*>& K2Node_MakeArray_Array);
};

}


