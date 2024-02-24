#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C
// (Actor)

class UClass* ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C");

	return Clss;
}


// BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C BP_ExplodingObject_DaffodilBarrel_Barrelmaker.Default__BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::GetDefaultObj()
{
	static class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C*>(ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.Setup_ExplodingObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDA_ExplodingObjectPresentation_C*NewPresentation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    DynamicMI                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "Setup_ExplodingObject");

	Params::ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C_Setup_ExplodingObject_Params Parms{};

	Parms.NewPresentation = NewPresentation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicMI != nullptr)
		*DynamicMI = Parms.DynamicMI;

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.Explode_Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::Explode_Damage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "Explode_Damage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.Explode_Puddle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::Explode_Puddle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "Explode_Puddle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.Explode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::Explode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "Explode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.BPI_SetNavPainterEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::BPI_SetNavPainterEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "BPI_SetNavPainterEnabled");

	Params::ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C_BPI_SetNavPainterEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.VisualState_FuseStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::VisualState_FuseStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "VisualState_FuseStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.__UserState_ExplodingObjectState_1
// (BlueprintEvent)
// Parameters:
// bool                               bFromLoad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::__UserState_ExplodingObjectState_1(bool bFromLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "__UserState_ExplodingObjectState_1");

	Params::ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C___UserState_ExplodingObjectState_1_Params Parms{};

	Parms.bFromLoad = bFromLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.VisualState_ExplodedStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::VisualState_ExplodedStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "VisualState_ExplodedStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.Explode_Cloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::Explode_Cloud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "Explode_Cloud");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_DaffodilBarrel_Barrelmaker
// (BlueprintEvent)
// Parameters:
// class AActor*                      TouchingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             ComponentTouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_DaffodilBarrel_Barrelmaker(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_DaffodilBarrel_Barrelmaker");

	Params::ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_DaffodilBarrel_Barrelmaker_Params Parms{};

	Parms.TouchingActor = TouchingActor;
	Parms.bIsPlayer = bIsPlayer;
	Parms.ComponentTouched = ComponentTouched;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C.ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel_Barrelmaker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable2                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable3                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable4                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  Temp_object_Variable5                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Enabled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxSpawnActorAsyncRequest  K2Node_MakeStruct_GbxSpawnActorAsyncRequest                      (ContainsInstancedReference)
// int32                              CallFunc_SpawnActorAsync_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseAudioComponent*        CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplatData*                  K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAudioPlaying_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// bool                               K2Node_UserStateEvent_bFromLoad                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_ComponentBoundEvent_TouchingActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_ComponentBoundEvent_ComponentTouched                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C::ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel_Barrelmaker(int32 EntryPoint, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, class USplatData* Temp_object_Variable3, class USplatData* Temp_object_Variable4, class USplatData* Temp_object_Variable5, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable1, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool K2Node_Event_Enabled, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, enum class EOakElementalType Temp_byte_Variable, bool Temp_bool_IsClosed_Variable1, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, class USplatData* K2Node_Select_Default, bool CallFunc_IsAudioPlaying_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool K2Node_UserStateEvent_bFromLoad, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, const struct FHitResult& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C", "ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel_Barrelmaker");

	Params::ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C_ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel_Barrelmaker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.K2Node_Event_Enabled = K2Node_Event_Enabled;
	Parms.K2Node_MakeStruct_GbxSpawnActorAsyncRequest = K2Node_MakeStruct_GbxSpawnActorAsyncRequest;
	Parms.CallFunc_SpawnActorAsync_ReturnValue = CallFunc_SpawnActorAsync_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue = CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsAudioPlaying_ReturnValue = CallFunc_IsAudioPlaying_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.K2Node_UserStateEvent_bFromLoad = K2Node_UserStateEvent_bFromLoad;
	Parms.K2Node_ComponentBoundEvent_TouchingActor = K2Node_ComponentBoundEvent_TouchingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer = K2Node_ComponentBoundEvent_bIsPlayer;
	Parms.K2Node_ComponentBoundEvent_ComponentTouched = K2Node_ComponentBoundEvent_ComponentTouched;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


