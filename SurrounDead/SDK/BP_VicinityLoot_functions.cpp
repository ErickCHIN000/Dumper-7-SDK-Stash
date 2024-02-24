#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_VicinityLoot.BP_VicinityLoot_C
// (None)

class UClass* UBP_VicinityLoot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VicinityLoot_C");

	return Clss;
}


// BP_VicinityLoot_C BP_VicinityLoot.Default__BP_VicinityLoot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VicinityLoot_C* UBP_VicinityLoot_C::GetDefaultObj()
{
	static class UBP_VicinityLoot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VicinityLoot_C*>(UBP_VicinityLoot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VicinityLoot.BP_VicinityLoot_C.GetActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UJSI_Slot_C*                 JigRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorValue                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSI_Slot_C*>         CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* UBP_VicinityLoot_C::GetActor(class UJSI_Slot_C* JigRef, class AActor** ActorValue, class AActor* Actor, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UJSI_Slot_C*>& CallFunc_Map_Values_Values, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class UJSI_Slot_C* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "GetActor");

	Params::UBP_VicinityLoot_C_GetActor_Params Parms{};

	Parms.JigRef = JigRef;
	Parms.Actor = Actor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActorValue != nullptr)
		*ActorValue = Parms.ActorValue;

	return Parms.ReturnValue;

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.AddPickups
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 Jig                                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Current                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Keys                                                             (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<class AActor*>              Actor                                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MpInteractInterface_C>K2Node_DynamicCast_AsBP_Mp_Interact_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MainFirearmClass_C*      K2Node_DynamicCast_AsBP_Main_Firearm_Class                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_GetItemInfo_Info                                        (ContainsInstancedReference, HasGetValueTypeHash)
// struct FS_RandomStatsConfig        CallFunc_GetItemInfo_RandomStatsConfig                           (HasGetValueTypeHash)
// struct FS_RepAttachmentInfo        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IJSISpecialWidgetInterface_C>K2Node_DynamicCast_AsJSISpecial_Widget_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers                          (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddNewInventoryItem_Added                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddNewInventoryItem_SlotIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_AddNewInventoryItem_ItemInfo                            (ContainsInstancedReference, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_AddNewInventoryItem_SlotItemRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddNewInventoryItem_Stacked_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_AddNewInventoryItem_Added_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddNewInventoryItem_SlotIndex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFItemInfo                  CallFunc_AddNewInventoryItem_ItemInfo_1                          (ContainsInstancedReference, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_AddNewInventoryItem_SlotItemRef_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddNewInventoryItem_Stacked__1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ISCapacityContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_BoxTraceMultiForObjects_OutHits                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceMultiForObjects_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_4                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MpInteractInterface_C>K2Node_DynamicCast_AsBP_Mp_Interact_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_MpInteractInterface_C>K2Node_DynamicCast_AsBP_Mp_Interact_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JigCanInteract_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        CallFunc_GetJigMultiplayerComponent_JigComp                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPickupComponent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VicinityLoot_C::AddPickups(class UJSI_Slot_C* Jig, class AActor* Current, const TArray<class AActor*>& Keys, const TArray<class AActor*>& Actor, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface, bool K2Node_DynamicCast_bSuccess, class ABP_MainFirearmClass_C* K2Node_DynamicCast_AsBP_Main_Firearm_Class, bool K2Node_DynamicCast_bSuccess_1, const struct FFItemInfo& CallFunc_GetItemInfo_Info, const struct FS_RandomStatsConfig& CallFunc_GetItemInfo_RandomStatsConfig, const struct FS_RepAttachmentInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, TScriptInterface<class IJSISpecialWidgetInterface_C> K2Node_DynamicCast_AsJSISpecial_Widget_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, class UJSIContainer_C* CallFunc_Array_Get_Item_1, class UJSIContainer_C* CallFunc_Array_Get_Item_2, bool CallFunc_AddNewInventoryItem_Added, int32 CallFunc_AddNewInventoryItem_SlotIndex, const struct FFItemInfo& CallFunc_AddNewInventoryItem_ItemInfo, class UJSI_Slot_C* CallFunc_AddNewInventoryItem_SlotItemRef, bool CallFunc_AddNewInventoryItem_Stacked_, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class AActor*>& CallFunc_Map_Keys_Keys, bool CallFunc_AddNewInventoryItem_Added_1, int32 CallFunc_AddNewInventoryItem_SlotIndex_1, const struct FFItemInfo& CallFunc_AddNewInventoryItem_ItemInfo_1, class UJSI_Slot_C* CallFunc_AddNewInventoryItem_SlotItemRef_1, bool CallFunc_AddNewInventoryItem_Stacked__1, bool CallFunc_ISCapacityContainer_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class AActor* CallFunc_Array_Get_Item_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class AActor*>& CallFunc_Map_Keys_Keys_1, int32 Temp_int_Loop_Counter_Variable_3, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, const struct FHitResult& CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_MpInteractInterface_C> K2Node_DynamicCast_AsBP_Mp_Interact_Interface_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_JigCanInteract_Result, class UBP_JigMultiplayer_C* CallFunc_GetJigMultiplayerComponent_JigComp, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPickupComponent_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "AddPickups");

	Params::UBP_VicinityLoot_C_AddPickups_Params Parms{};

	Parms.Jig = Jig;
	Parms.Current = Current;
	Parms.Keys = Keys;
	Parms.Actor = Actor;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_DynamicCast_AsBP_Mp_Interact_Interface = K2Node_DynamicCast_AsBP_Mp_Interact_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Main_Firearm_Class = K2Node_DynamicCast_AsBP_Main_Firearm_Class;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemInfo_Info = CallFunc_GetItemInfo_Info;
	Parms.CallFunc_GetItemInfo_RandomStatsConfig = CallFunc_GetItemInfo_RandomStatsConfig;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.K2Node_DynamicCast_AsJSISpecial_Widget_Interface = K2Node_DynamicCast_AsJSISpecial_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetListOfContainers_Containers = CallFunc_GetListOfContainers_Containers;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AddNewInventoryItem_Added = CallFunc_AddNewInventoryItem_Added;
	Parms.CallFunc_AddNewInventoryItem_SlotIndex = CallFunc_AddNewInventoryItem_SlotIndex;
	Parms.CallFunc_AddNewInventoryItem_ItemInfo = CallFunc_AddNewInventoryItem_ItemInfo;
	Parms.CallFunc_AddNewInventoryItem_SlotItemRef = CallFunc_AddNewInventoryItem_SlotItemRef;
	Parms.CallFunc_AddNewInventoryItem_Stacked_ = CallFunc_AddNewInventoryItem_Stacked_;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_AddNewInventoryItem_Added_1 = CallFunc_AddNewInventoryItem_Added_1;
	Parms.CallFunc_AddNewInventoryItem_SlotIndex_1 = CallFunc_AddNewInventoryItem_SlotIndex_1;
	Parms.CallFunc_AddNewInventoryItem_ItemInfo_1 = CallFunc_AddNewInventoryItem_ItemInfo_1;
	Parms.CallFunc_AddNewInventoryItem_SlotItemRef_1 = CallFunc_AddNewInventoryItem_SlotItemRef_1;
	Parms.CallFunc_AddNewInventoryItem_Stacked__1 = CallFunc_AddNewInventoryItem_Stacked__1;
	Parms.CallFunc_ISCapacityContainer_ReturnValue = CallFunc_ISCapacityContainer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BoxTraceMultiForObjects_OutHits = CallFunc_BoxTraceMultiForObjects_OutHits;
	Parms.CallFunc_BoxTraceMultiForObjects_ReturnValue = CallFunc_BoxTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsBP_Mp_Interact_Interface_1 = K2Node_DynamicCast_AsBP_Mp_Interact_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Mp_Interact_Interface_2 = K2Node_DynamicCast_AsBP_Mp_Interact_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_JigCanInteract_Result = CallFunc_JigCanInteract_Result;
	Parms.CallFunc_GetJigMultiplayerComponent_JigComp = CallFunc_GetJigMultiplayerComponent_JigComp;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPickupComponent_ReturnValue = CallFunc_IsPickupComponent_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_VicinityLoot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_VicinityLoot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_VicinityLoot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.Drop_ContainerOnContainerUnhandled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 DroppedSlotRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotReceiverRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ToSlotIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Rotated_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VicinityLoot_C::Drop_ContainerOnContainerUnhandled(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* DroppedSlotRef, class UJSI_Slot_C* SlotReceiverRef, int32 ToSlotIndex, bool Rotated_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "Drop_ContainerOnContainerUnhandled");

	Params::UBP_VicinityLoot_C_Drop_ContainerOnContainerUnhandled_Params Parms{};

	Parms.FromContainer = FromContainer;
	Parms.ToContainer = ToContainer;
	Parms.DroppedSlotRef = DroppedSlotRef;
	Parms.SlotReceiverRef = SlotReceiverRef;
	Parms.ToSlotIndex = ToSlotIndex;
	Parms.Rotated_ = Rotated_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.OnItemStackRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 DroppedItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 ReceiverItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_VicinityLoot_C::OnItemStackRequest(class UJSI_Slot_C* DroppedItem, class UJSI_Slot_C* ReceiverItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "OnItemStackRequest");

	Params::UBP_VicinityLoot_C_OnItemStackRequest_Params Parms{};

	Parms.DroppedItem = DroppedItem;
	Parms.ReceiverItem = ReceiverItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.OnSlotMouseButtonDown_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_VicinityLoot_C::OnSlotMouseButtonDown_Event_0(class UJSIContainer_C* Container, class UJSI_Slot_C* SlotRef, const struct FKey& Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "OnSlotMouseButtonDown_Event_0");

	Params::UBP_VicinityLoot_C_OnSlotMouseButtonDown_Event_0_Params Parms{};

	Parms.Container = Container;
	Parms.SlotRef = SlotRef;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VicinityLoot.BP_VicinityLoot_C.ExecuteUbergraph_BP_VicinityLoot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputKeyDown_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_FromContainer                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_ToContainer                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_DroppedSlotRef                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_SlotReceiverRef                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToSlotIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Rotated_                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ActorValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnPickupInteractExecuted_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JSI_CheckIfCanAddActorToContainer_Result                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_JSI_CheckIfCanAddActorToContainer_AddtoUID              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_JSI_CheckIfCanAddActorToContainer_TempItemUID           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_JSI_CheckIfCanAddActorToContainer_ToIndex               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JSI_CheckIfCanAddActorToContainer_FinalRotation         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromJSIParent_Removed                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipTo__ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UJSI_Slot_C*                 K2Node_CustomEvent_DroppedItem                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_ReceiverItem                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetUniqueID_UniqueServerID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromJSIParent_Removed_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ActorValue_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_Container                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_SlotRef                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_CustomEvent_Button                                        (HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActor_ActorValue_2                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_JigCharacterInterface_C>K2Node_DynamicCast_AsBP_Jig_Character_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromJSIParent_Removed_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnPickupInteractExecuted_Result_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VicinityLoot_C::ExecuteUbergraph_BP_VicinityLoot(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UJSIContainer_C* K2Node_CustomEvent_FromContainer, class UJSIContainer_C* K2Node_CustomEvent_ToContainer, class UJSI_Slot_C* K2Node_CustomEvent_DroppedSlotRef, class UJSI_Slot_C* K2Node_CustomEvent_SlotReceiverRef, int32 K2Node_CustomEvent_ToSlotIndex, bool K2Node_CustomEvent_Rotated_, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AActor* CallFunc_GetActor_ReturnValue, class AActor* CallFunc_GetActor_ActorValue, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_OnPickupInteractExecuted_Result, bool CallFunc_JSI_CheckIfCanAddActorToContainer_Result, int32 CallFunc_JSI_CheckIfCanAddActorToContainer_AddtoUID, int32 CallFunc_JSI_CheckIfCanAddActorToContainer_TempItemUID, int32 CallFunc_JSI_CheckIfCanAddActorToContainer_ToIndex, bool CallFunc_JSI_CheckIfCanAddActorToContainer_FinalRotation, bool CallFunc_RemoveFromJSIParent_Removed, bool CallFunc_IsEquipTo__ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<int32>& K2Node_MakeArray_Array, class UJSI_Slot_C* K2Node_CustomEvent_DroppedItem, class UJSI_Slot_C* K2Node_CustomEvent_ReceiverItem, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, int32 CallFunc_GetUniqueID_UniqueServerID, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_RemoveFromJSIParent_Removed_1, class AActor* CallFunc_GetActor_ReturnValue_1, class AActor* CallFunc_GetActor_ActorValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, class UJSIContainer_C* K2Node_CustomEvent_Container, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef, const struct FKey& K2Node_CustomEvent_Button, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AActor* CallFunc_GetActor_ReturnValue_2, class AActor* CallFunc_GetActor_ActorValue_2, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RemoveFromJSIParent_Removed_2, bool CallFunc_OnPickupInteractExecuted_Result_1, bool CallFunc_Map_Remove_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VicinityLoot_C", "ExecuteUbergraph_BP_VicinityLoot");

	Params::UBP_VicinityLoot_C_ExecuteUbergraph_BP_VicinityLoot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsInputKeyDown_ReturnValue = CallFunc_IsInputKeyDown_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CustomEvent_FromContainer = K2Node_CustomEvent_FromContainer;
	Parms.K2Node_CustomEvent_ToContainer = K2Node_CustomEvent_ToContainer;
	Parms.K2Node_CustomEvent_DroppedSlotRef = K2Node_CustomEvent_DroppedSlotRef;
	Parms.K2Node_CustomEvent_SlotReceiverRef = K2Node_CustomEvent_SlotReceiverRef;
	Parms.K2Node_CustomEvent_ToSlotIndex = K2Node_CustomEvent_ToSlotIndex;
	Parms.K2Node_CustomEvent_Rotated_ = K2Node_CustomEvent_Rotated_;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetActor_ReturnValue = CallFunc_GetActor_ReturnValue;
	Parms.CallFunc_GetActor_ActorValue = CallFunc_GetActor_ActorValue;
	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface = K2Node_DynamicCast_AsBP_Jig_Character_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_OnPickupInteractExecuted_Result = CallFunc_OnPickupInteractExecuted_Result;
	Parms.CallFunc_JSI_CheckIfCanAddActorToContainer_Result = CallFunc_JSI_CheckIfCanAddActorToContainer_Result;
	Parms.CallFunc_JSI_CheckIfCanAddActorToContainer_AddtoUID = CallFunc_JSI_CheckIfCanAddActorToContainer_AddtoUID;
	Parms.CallFunc_JSI_CheckIfCanAddActorToContainer_TempItemUID = CallFunc_JSI_CheckIfCanAddActorToContainer_TempItemUID;
	Parms.CallFunc_JSI_CheckIfCanAddActorToContainer_ToIndex = CallFunc_JSI_CheckIfCanAddActorToContainer_ToIndex;
	Parms.CallFunc_JSI_CheckIfCanAddActorToContainer_FinalRotation = CallFunc_JSI_CheckIfCanAddActorToContainer_FinalRotation;
	Parms.CallFunc_RemoveFromJSIParent_Removed = CallFunc_RemoveFromJSIParent_Removed;
	Parms.CallFunc_IsEquipTo__ReturnValue = CallFunc_IsEquipTo__ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_DroppedItem = K2Node_CustomEvent_DroppedItem;
	Parms.K2Node_CustomEvent_ReceiverItem = K2Node_CustomEvent_ReceiverItem;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetUniqueID_UniqueServerID = CallFunc_GetUniqueID_UniqueServerID;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_RemoveFromJSIParent_Removed_1 = CallFunc_RemoveFromJSIParent_Removed_1;
	Parms.CallFunc_GetActor_ReturnValue_1 = CallFunc_GetActor_ReturnValue_1;
	Parms.CallFunc_GetActor_ActorValue_1 = CallFunc_GetActor_ActorValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue_1 = CallFunc_Map_Remove_ReturnValue_1;
	Parms.K2Node_CustomEvent_Container = K2Node_CustomEvent_Container;
	Parms.K2Node_CustomEvent_SlotRef = K2Node_CustomEvent_SlotRef;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetActor_ReturnValue_2 = CallFunc_GetActor_ReturnValue_2;
	Parms.CallFunc_GetActor_ActorValue_2 = CallFunc_GetActor_ActorValue_2;
	Parms.K2Node_DynamicCast_AsBP_Jig_Character_Interface_1 = K2Node_DynamicCast_AsBP_Jig_Character_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RemoveFromJSIParent_Removed_2 = CallFunc_RemoveFromJSIParent_Removed_2;
	Parms.CallFunc_OnPickupInteractExecuted_Result_1 = CallFunc_OnPickupInteractExecuted_Result_1;
	Parms.CallFunc_Map_Remove_ReturnValue_2 = CallFunc_Map_Remove_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


