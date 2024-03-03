#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x1B0 - 0xB0)
// BlueprintGeneratedClass CollisionHandlerComponent.CollisionHandlerComponent_C
class UCollisionHandlerComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         CanPerformTrace;                                   // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CollisionActive;                                   // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FVector>            LastSocketLocations;                               // 0xC0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	TArray<enum class EObjectTypeQuery>          ObjectTypesToCollideWith;                          // 0x110(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          IgnoredCollisionProfileNames;                      // 0x120(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EDrawDebugTrace                   VisualizeTrace;                                    // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        IgnoredClasses;                                    // 0x138(0x10)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnHit;                                             // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCollisionActivated;                              // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCollisionDeactivated;                            // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TraceRadius;                                       // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FF_CollisionComponent>         CollisionComponents;                               // 0x180(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FF_CollCompHitActors>          HitActors;                                         // 0x190(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnCollisionReactived;                              // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UCollisionHandlerComponent_C* GetDefaultObj();

	void AddHitActor(class UPrimitiveComponent* Component, class AActor* HitActor, int32 CallFunc_GetHitActorsIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetHitActors(class UPrimitiveComponent* Component, TArray<class AActor*>* HitActors, int32 CallFunc_GetHitActorsIndex_Index, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FF_CollCompHitActors& K2Node_MakeStruct_F_CollCompHitActors, int32 CallFunc_Array_Add_ReturnValue);
	void GetHitActorsIndex(class UPrimitiveComponent* Component, int32* Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_CollCompHitActors& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetUniqueSocketName(class UPrimitiveComponent* Component, class FName SocketName, class FName* UniqueName, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void IsCollisionActive(bool* Result);
	bool IsIgnoredClass(class UClass* TestClass, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetCollisionMesh(class UPrimitiveComponent* WeaponMesh, TArray<class FName>& Sockets);
	void ActivateCollision(enum class E_CollisionPart CollisionPart);
	void DeactivateCollision();
	void UpdateLastSocketPositions();
	void ReceiveTick(float DeltaSeconds);
	void PerformTrace();
	void SetCollisionMeshes(TArray<struct FF_CollisionComponent>& CollComps);
	void ReactiveCollision();
	void SetGiantCollisionMesh(class UPrimitiveComponent* WeaponMesh, TArray<class FName>& Sockets);
	void SetMouthBigCollsionMesh(class UPrimitiveComponent* WeaponMesh, TArray<class FName>& Sockets);
	void ExecuteUbergraph_CollisionHandlerComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UPrimitiveComponent* K2Node_CustomEvent_WeaponMesh_2, TArray<class FName>& K2Node_CustomEvent_Sockets_2, enum class E_CollisionPart K2Node_CustomEvent_CollisionPart, const struct FF_CollisionComponent& K2Node_MakeStruct_F_CollisionComponent, TArray<struct FF_CollisionComponent>& K2Node_MakeArray_Array, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, TArray<struct FF_CollisionComponent>& K2Node_CustomEvent_CollComps, const struct FF_CollisionComponent& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item_1, class FName CallFunc_GetUniqueSocketName_UniqueName, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_4, const struct FF_CollisionComponent& CallFunc_Array_Get_Item_2, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, class FName CallFunc_GetUniqueSocketName_UniqueName_1, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_GetHitActors_HitActors, TArray<class AActor*>& CallFunc_GetHitActors_HitActors_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsIgnoredClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UPrimitiveComponent* K2Node_CustomEvent_WeaponMesh_1, TArray<class FName>& K2Node_CustomEvent_Sockets_1, const struct FF_CollisionComponent& K2Node_MakeStruct_F_CollisionComponent_1, TArray<struct FF_CollisionComponent>& K2Node_MakeArray_Array_1, class UPrimitiveComponent* K2Node_CustomEvent_WeaponMesh, TArray<class FName>& K2Node_CustomEvent_Sockets, const struct FF_CollisionComponent& K2Node_MakeStruct_F_CollisionComponent_2, TArray<struct FF_CollisionComponent>& K2Node_MakeArray_Array_2);
	void OnCollisionReactived__DelegateSignature();
	void OnCollisionDeactivated__DelegateSignature();
	void OnCollisionActivated__DelegateSignature(enum class E_CollisionPart CollisionPart);
	void OnHit__DelegateSignature(const struct FHitResult& HitResult);
};

}


