#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x310 - 0x2F8)
// WidgetBlueprintGeneratedClass CF_SpawnExoticAtCursor.CF_SpawnExoticAtCursor_C
class UCF_SpawnExoticAtCursor_C : public UCF_BaseCombo_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<TSoftClassPtr<class AActor>>          ValidClassesToSpawn;                               // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCF_SpawnExoticAtCursor_C* GetDefaultObj();

	void OnLoaded_C932FF1E4346885E4EA308A8CE89DD58(TSubclassOf<class UObject> Loaded);
	void Construct();
	void HandleExecute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_SpawnExoticAtCursor(int32 EntryPoint, class UStringRow_C* CallFunc_Create_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TSoftClassPtr<class AActor> CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FSoftClassPath& CallFunc_MakeSoftClassPath_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSoftClassPtr<class UObject> CallFunc_Conv_SoftClassPathToSoftClassRef_ReturnValue, const struct FViewTraceParams& K2Node_MakeStruct_ViewTraceParams, const struct FViewTraceResult& CallFunc_ViewTraceByChannel_Result, bool CallFunc_ViewTraceByChannel_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
};

}


