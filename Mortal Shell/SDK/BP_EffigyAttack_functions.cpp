#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EffigyAttack.BP_EffigyAttack_C
// (Actor)

class UClass* ABP_EffigyAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EffigyAttack_C");

	return Clss;
}


// BP_EffigyAttack_C BP_EffigyAttack.Default__BP_EffigyAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EffigyAttack_C* ABP_EffigyAttack_C::GetDefaultObj()
{
	static class ABP_EffigyAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EffigyAttack_C*>(ABP_EffigyAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EffigyAttack.BP_EffigyAttack_C.GetWeaponMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMesh* ABP_EffigyAttack_C::GetWeaponMesh(enum class EComboTypes Temp_byte_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, class USkeletalMesh* Temp_object_Variable_3, class USkeletalMesh* Temp_object_Variable_4, class USkeletalMesh* Temp_object_Variable_5, class USkeletalMesh* Temp_object_Variable_6, class USkeletalMesh* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "GetWeaponMesh");

	Params::ABP_EffigyAttack_C_GetWeaponMesh_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.Timeline_Opacity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_EffigyAttack_C::Timeline_Opacity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "Timeline_Opacity__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.Timeline_Opacity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_EffigyAttack_C::Timeline_Opacity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "Timeline_Opacity__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.OnNotifyEnd_8BCE359347EB28712895408C8A5EE249
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffigyAttack_C::OnNotifyEnd_8BCE359347EB28712895408C8A5EE249(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "OnNotifyEnd_8BCE359347EB28712895408C8A5EE249");

	Params::ABP_EffigyAttack_C_OnNotifyEnd_8BCE359347EB28712895408C8A5EE249_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.OnNotifyBegin_8BCE359347EB28712895408C8A5EE249
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffigyAttack_C::OnNotifyBegin_8BCE359347EB28712895408C8A5EE249(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "OnNotifyBegin_8BCE359347EB28712895408C8A5EE249");

	Params::ABP_EffigyAttack_C_OnNotifyBegin_8BCE359347EB28712895408C8A5EE249_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.OnInterrupted_8BCE359347EB28712895408C8A5EE249
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffigyAttack_C::OnInterrupted_8BCE359347EB28712895408C8A5EE249(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "OnInterrupted_8BCE359347EB28712895408C8A5EE249");

	Params::ABP_EffigyAttack_C_OnInterrupted_8BCE359347EB28712895408C8A5EE249_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.OnBlendOut_8BCE359347EB28712895408C8A5EE249
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffigyAttack_C::OnBlendOut_8BCE359347EB28712895408C8A5EE249(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "OnBlendOut_8BCE359347EB28712895408C8A5EE249");

	Params::ABP_EffigyAttack_C_OnBlendOut_8BCE359347EB28712895408C8A5EE249_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.OnCompleted_8BCE359347EB28712895408C8A5EE249
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffigyAttack_C::OnCompleted_8BCE359347EB28712895408C8A5EE249(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "OnCompleted_8BCE359347EB28712895408C8A5EE249");

	Params::ABP_EffigyAttack_C_OnCompleted_8BCE359347EB28712895408C8A5EE249_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_EffigyAttack_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EffigyAttack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.ExecuteUbergraph_BP_EffigyAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetWeaponMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActiveMontage_OutPosition                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetActiveMontage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EffigyAttack_C::ExecuteUbergraph_BP_EffigyAttack(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class USkeletalMesh* CallFunc_GetWeaponMesh_ReturnValue, float CallFunc_GetActiveMontage_OutPosition, class UAnimMontage* CallFunc_GetActiveMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "ExecuteUbergraph_BP_EffigyAttack");

	Params::ABP_EffigyAttack_C_ExecuteUbergraph_BP_EffigyAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_GetWeaponMesh_ReturnValue = CallFunc_GetWeaponMesh_ReturnValue;
	Parms.CallFunc_GetActiveMontage_OutPosition = CallFunc_GetActiveMontage_OutPosition;
	Parms.CallFunc_GetActiveMontage_ReturnValue = CallFunc_GetActiveMontage_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.ShiftEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EffigyAttack_C::ShiftEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "ShiftEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyAttack.BP_EffigyAttack_C.ApplyNewShell__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EffigyAttack_C::ApplyNewShell__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyAttack_C", "ApplyNewShell__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


