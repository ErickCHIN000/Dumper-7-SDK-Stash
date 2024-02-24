#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GenericNPC.BP_GenericNPC_C
// (Actor)

class UClass* ABP_GenericNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GenericNPC_C");

	return Clss;
}


// BP_GenericNPC_C BP_GenericNPC.Default__BP_GenericNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GenericNPC_C* ABP_GenericNPC_C::GetDefaultObj()
{
	static class ABP_GenericNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GenericNPC_C*>(ABP_GenericNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GenericNPC.BP_GenericNPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GenericNPC_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_C", "UserConstructionScript");

	Params::ABP_GenericNPC_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC.BP_GenericNPC_C.Finished_1F1A6E984D17228626AF658FCC7EB63A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLoadedAppearancePart>AppearanceParts                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInterface*          SkinMaterial                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_C::Finished_1F1A6E984D17228626AF658FCC7EB63A(TArray<struct FLoadedAppearancePart>& AppearanceParts, class UMaterialInterface* SkinMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_C", "Finished_1F1A6E984D17228626AF658FCC7EB63A");

	Params::ABP_GenericNPC_C_Finished_1F1A6E984D17228626AF658FCC7EB63A_Params Parms{};

	Parms.AppearanceParts = AppearanceParts;
	Parms.SkinMaterial = SkinMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC.BP_GenericNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GenericNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GenericNPC.BP_GenericNPC_C.SpawnNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OffsetLoc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_C::SpawnNPC(const struct FVector& Impulse, const struct FVector& OffsetLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_C", "SpawnNPC");

	Params::ABP_GenericNPC_C_SpawnNPC_Params Parms{};

	Parms.Impulse = Impulse;
	Parms.OffsetLoc = OffsetLoc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC.BP_GenericNPC_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GenericNPC_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_C", "ReceiveAnyDamage");

	Params::ABP_GenericNPC_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GenericNPC.BP_GenericNPC_C.ExecuteUbergraph_BP_GenericNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Impulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OffsetLoc                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadedAppearancePart>Temp_struct_Variable                                             (ReferenceParm)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadedAppearancePart       CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FLoadedAppearancePart>K2Node_CustomEvent_AppearanceParts                               (ConstParm, ReferenceParm)
// class UMaterialInterface*          K2Node_CustomEvent_SkinMaterial                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_CreateComponent_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGNPC*                      CallFunc_SpawnCivilianNPC_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGLoadNPCAppearance*        CallFunc_LoadNPCAppearance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GenericNPC_C::ExecuteUbergraph_BP_GenericNPC(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Impulse, const struct FVector& K2Node_CustomEvent_OffsetLoc, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FLoadedAppearancePart>& Temp_struct_Variable, class UMaterialInterface* Temp_object_Variable, const struct FLoadedAppearancePart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FLoadedAppearancePart>& K2Node_CustomEvent_AppearanceParts, class UMaterialInterface* K2Node_CustomEvent_SkinMaterial, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USceneComponent* CallFunc_CreateComponent_ReturnValue, class AGGNPC* CallFunc_SpawnCivilianNPC_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetStaticMesh_ReturnValue_1, class UGGLoadNPCAppearance* CallFunc_LoadNPCAppearance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GenericNPC_C", "ExecuteUbergraph_BP_GenericNPC");

	Params::ABP_GenericNPC_C_ExecuteUbergraph_BP_GenericNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Impulse = K2Node_CustomEvent_Impulse;
	Parms.K2Node_CustomEvent_OffsetLoc = K2Node_CustomEvent_OffsetLoc;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_AppearanceParts = K2Node_CustomEvent_AppearanceParts;
	Parms.K2Node_CustomEvent_SkinMaterial = K2Node_CustomEvent_SkinMaterial;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateComponent_ReturnValue = CallFunc_CreateComponent_ReturnValue;
	Parms.CallFunc_SpawnCivilianNPC_ReturnValue = CallFunc_SpawnCivilianNPC_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_LoadNPCAppearance_ReturnValue = CallFunc_LoadNPCAppearance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


