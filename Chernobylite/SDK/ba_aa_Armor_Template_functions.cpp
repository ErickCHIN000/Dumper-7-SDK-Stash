#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_Armor_Template.ba_aa_Armor_Template_C
// (Actor)

class UClass* Aba_aa_Armor_Template_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_Armor_Template_C");

	return Clss;
}


// ba_aa_Armor_Template_C ba_aa_Armor_Template.Default__ba_aa_Armor_Template_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_Armor_Template_C* Aba_aa_Armor_Template_C::GetDefaultObj()
{
	static class Aba_aa_Armor_Template_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_Armor_Template_C*>(Aba_aa_Armor_Template_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.ShowArmorLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_OnscreenLogDictionaryKeysTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_OnscreenLogDictionaryKeysTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class Enum_OnscreenLogDictionaryKeysK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmorInfo                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)

void Aba_aa_Armor_Template_C::ShowArmorLog(bool Equipped, bool Temp_bool_Variable, enum class Enum_OnscreenLogDictionaryKeys Temp_byte_Variable, enum class Enum_OnscreenLogDictionaryKeys Temp_byte_Variable_1, TArray<float>& K2Node_MakeArray_Array, enum class Enum_OnscreenLogDictionaryKeys K2Node_Select_Default, const struct FArmorInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "ShowArmorLog");

	Params::Aba_aa_Armor_Template_C_ShowArmorLog_Params Parms{};

	Parms.Equipped = Equipped;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.DropInserts
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PickableItem_Spawnable_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::DropInserts(class FName Name, float Amount, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "DropInserts");

	Params::Aba_aa_Armor_Template_C_DropInserts_Params Parms{};

	Parms.Name = Name;
	Parms.Amount = Amount;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnNotifyEnd_70A8BD00490CF35E04FC62AF37A858A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnNotifyEnd_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnNotifyEnd_70A8BD00490CF35E04FC62AF37A858A4");

	Params::Aba_aa_Armor_Template_C_OnNotifyEnd_70A8BD00490CF35E04FC62AF37A858A4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnNotifyBegin_70A8BD00490CF35E04FC62AF37A858A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnNotifyBegin_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnNotifyBegin_70A8BD00490CF35E04FC62AF37A858A4");

	Params::Aba_aa_Armor_Template_C_OnNotifyBegin_70A8BD00490CF35E04FC62AF37A858A4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnInterrupted_70A8BD00490CF35E04FC62AF37A858A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnInterrupted_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnInterrupted_70A8BD00490CF35E04FC62AF37A858A4");

	Params::Aba_aa_Armor_Template_C_OnInterrupted_70A8BD00490CF35E04FC62AF37A858A4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnBlendOut_70A8BD00490CF35E04FC62AF37A858A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnBlendOut_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnBlendOut_70A8BD00490CF35E04FC62AF37A858A4");

	Params::Aba_aa_Armor_Template_C_OnBlendOut_70A8BD00490CF35E04FC62AF37A858A4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnCompleted_70A8BD00490CF35E04FC62AF37A858A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnCompleted_70A8BD00490CF35E04FC62AF37A858A4(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnCompleted_70A8BD00490CF35E04FC62AF37A858A4");

	Params::Aba_aa_Armor_Template_C_OnCompleted_70A8BD00490CF35E04FC62AF37A858A4_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnNotifyEnd_67A9357F4118C6DA868DA58FA709B84A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnNotifyEnd_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnNotifyEnd_67A9357F4118C6DA868DA58FA709B84A");

	Params::Aba_aa_Armor_Template_C_OnNotifyEnd_67A9357F4118C6DA868DA58FA709B84A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnNotifyBegin_67A9357F4118C6DA868DA58FA709B84A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnNotifyBegin_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnNotifyBegin_67A9357F4118C6DA868DA58FA709B84A");

	Params::Aba_aa_Armor_Template_C_OnNotifyBegin_67A9357F4118C6DA868DA58FA709B84A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnInterrupted_67A9357F4118C6DA868DA58FA709B84A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnInterrupted_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnInterrupted_67A9357F4118C6DA868DA58FA709B84A");

	Params::Aba_aa_Armor_Template_C_OnInterrupted_67A9357F4118C6DA868DA58FA709B84A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnBlendOut_67A9357F4118C6DA868DA58FA709B84A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnBlendOut_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnBlendOut_67A9357F4118C6DA868DA58FA709B84A");

	Params::Aba_aa_Armor_Template_C_OnBlendOut_67A9357F4118C6DA868DA58FA709B84A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.OnCompleted_67A9357F4118C6DA868DA58FA709B84A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Armor_Template_C::OnCompleted_67A9357F4118C6DA868DA58FA709B84A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "OnCompleted_67A9357F4118C6DA868DA58FA709B84A");

	Params::Aba_aa_Armor_Template_C_OnCompleted_67A9357F4118C6DA868DA58FA709B84A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.AlternativeActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_Armor_Template_C::AlternativeActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "AlternativeActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_Armor_Template_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.InstantUnequip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Armor_Template_C::InstantUnequip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "InstantUnequip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.ReturnInsertsFromOldArmor
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ArmorAmount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmorInsertInfo            ArmorInsertInfo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void Aba_aa_Armor_Template_C::ReturnInsertsFromOldArmor(float ArmorAmount, struct FArmorInsertInfo& ArmorInsertInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "ReturnInsertsFromOldArmor");

	Params::Aba_aa_Armor_Template_C_ReturnInsertsFromOldArmor_Params Parms{};

	Parms.ArmorAmount = ArmorAmount;
	Parms.ArmorInsertInfo = ArmorInsertInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Armor_Template.ba_aa_Armor_Template_C.ExecuteUbergraph_ba_aa_Armor_Template
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEquippedArmorInfoName_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArmorEquipped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmorInsertInfo            CallFunc_GetInsertInfo_ReturnValue                               (NoDestructor)
// bool                               CallFunc_IsArmorEquipped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue_4                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EquipDifferentArmor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EquipDifferentArmor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmorInsertInfo            CallFunc_GetInsertInfo_ReturnValue_1                             (NoDestructor)
// float                              CallFunc_EquipDifferentArmor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorEquipped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_ArmorAmount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmorInsertInfo            K2Node_CustomEvent_ArmorInsertInfo                               (ConstParm, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_3                                         (ReferenceParm)

void Aba_aa_Armor_Template_C::ExecuteUbergraph_ba_aa_Armor_Template(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_7, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable_1, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_Conv_IntToFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class FName CallFunc_GetEquippedArmorInfoName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsArmorEquipped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FArmorInsertInfo& CallFunc_GetInsertInfo_ReturnValue, bool CallFunc_IsArmorEquipped_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_EquipDifferentArmor_ReturnValue, class FName K2Node_CustomEvent_NotifyName_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, float CallFunc_EquipDifferentArmor_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, const struct FArmorInsertInfo& CallFunc_GetInsertInfo_ReturnValue_1, float CallFunc_EquipDifferentArmor_ReturnValue_2, bool CallFunc_IsArmorEquipped_ReturnValue_2, float K2Node_CustomEvent_ArmorAmount, const struct FArmorInsertInfo& K2Node_CustomEvent_ArmorInsertInfo, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Add_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_1, TArray<float>& K2Node_MakeArray_Array_2, bool CallFunc_Greater_FloatFloat_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_9, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Armor_Template_C", "ExecuteUbergraph_ba_aa_Armor_Template");

	Params::Aba_aa_Armor_Template_C_ExecuteUbergraph_ba_aa_Armor_Template_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetHands_ReturnValue = CallFunc_GetHands_ReturnValue;
	Parms.CallFunc_GetHands_ReturnValue_1 = CallFunc_GetHands_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetEquippedArmorInfoName_ReturnValue = CallFunc_GetEquippedArmorInfoName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsArmorEquipped_ReturnValue = CallFunc_IsArmorEquipped_ReturnValue;
	Parms.CallFunc_GetHands_ReturnValue_2 = CallFunc_GetHands_ReturnValue_2;
	Parms.CallFunc_GetHands_ReturnValue_3 = CallFunc_GetHands_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetInsertInfo_ReturnValue = CallFunc_GetInsertInfo_ReturnValue;
	Parms.CallFunc_IsArmorEquipped_ReturnValue_1 = CallFunc_IsArmorEquipped_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetHands_ReturnValue_4 = CallFunc_GetHands_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_EquipDifferentArmor_ReturnValue = CallFunc_EquipDifferentArmor_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_EquipDifferentArmor_ReturnValue_1 = CallFunc_EquipDifferentArmor_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetInsertInfo_ReturnValue_1 = CallFunc_GetInsertInfo_ReturnValue_1;
	Parms.CallFunc_EquipDifferentArmor_ReturnValue_2 = CallFunc_EquipDifferentArmor_ReturnValue_2;
	Parms.CallFunc_IsArmorEquipped_ReturnValue_2 = CallFunc_IsArmorEquipped_ReturnValue_2;
	Parms.K2Node_CustomEvent_ArmorAmount = K2Node_CustomEvent_ArmorAmount;
	Parms.K2Node_CustomEvent_ArmorInsertInfo = K2Node_CustomEvent_ArmorInsertInfo;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Add_ReturnValue_1 = CallFunc_Add_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


