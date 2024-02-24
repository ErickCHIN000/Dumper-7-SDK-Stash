#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_fakeHero.ba_fakeHero_C
// (Actor)

class UClass* Aba_fakeHero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_fakeHero_C");

	return Clss;
}


// ba_fakeHero_C ba_fakeHero.Default__ba_fakeHero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_fakeHero_C* Aba_fakeHero_C::GetDefaultObj()
{
	static class Aba_fakeHero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_fakeHero_C*>(Aba_fakeHero_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_fakeHero.ba_fakeHero_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_fakeHero_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_fakeHero_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_fakeHero.ba_fakeHero_C.OnAnimItemAttachment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              SkeletalIdx                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_fakeHero_C::OnAnimItemAttachment(uint8 SkeletalIdx, class UAnimSequence* Anim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_fakeHero_C", "OnAnimItemAttachment");

	Params::Aba_fakeHero_C_OnAnimItemAttachment_Params Parms{};

	Parms.SkeletalIdx = SkeletalIdx;
	Parms.Anim = Anim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_fakeHero.ba_fakeHero_C.OnAnimItemVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_fakeHero_C::OnAnimItemVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_fakeHero_C", "OnAnimItemVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_fakeHero.ba_fakeHero_C.OnAnimStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_fakeHero_C::OnAnimStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_fakeHero_C", "OnAnimStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_fakeHero.ba_fakeHero_C.ExecuteUbergraph_ba_fakeHero
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_SkeletalIdx                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_CustomEvent_Anim                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue_1                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue_2                      (IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue_3                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetAttachSocketName_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_2                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_3                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_1                                        (NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void Aba_fakeHero_C::ExecuteUbergraph_ba_fakeHero(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 Temp_int_Array_Index_Variable_1, uint8 K2Node_CustomEvent_SkeletalIdx, class UAnimSequence* K2Node_CustomEvent_Anim, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue_1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_2, class FName CallFunc_GetAttachSocketName_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_1, class FName CallFunc_GetAttachSocketName_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_3, uint8 Temp_byte_Variable, class USkeletalMeshComponent* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, const struct FWeightedBlendable& CallFunc_Array_Get_Item, const struct FWeightedBlendable& CallFunc_Array_Get_Item_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_fakeHero_C", "ExecuteUbergraph_ba_fakeHero");

	Params::Aba_fakeHero_C_ExecuteUbergraph_ba_fakeHero_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_SkeletalIdx = K2Node_CustomEvent_SkeletalIdx;
	Parms.K2Node_CustomEvent_Anim = K2Node_CustomEvent_Anim;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_GetAttachSocketName_ReturnValue = CallFunc_GetAttachSocketName_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue_1 = CallFunc_GetRelativeTransform_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_GetAttachSocketName_ReturnValue_1 = CallFunc_GetAttachSocketName_ReturnValue_1;
	Parms.CallFunc_GetRelativeTransform_ReturnValue_2 = CallFunc_GetRelativeTransform_ReturnValue_2;
	Parms.CallFunc_GetAttachSocketName_ReturnValue_2 = CallFunc_GetAttachSocketName_ReturnValue_2;
	Parms.CallFunc_GetRelativeTransform_ReturnValue_3 = CallFunc_GetRelativeTransform_ReturnValue_3;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_GetAttachSocketName_ReturnValue_3 = CallFunc_GetAttachSocketName_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_2 = CallFunc_K2_SetRelativeTransform_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_3 = CallFunc_K2_SetRelativeTransform_SweepHitResult_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput = CallFunc_RemoveBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


