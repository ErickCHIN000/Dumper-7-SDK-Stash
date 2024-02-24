#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_railgun_00.ba_aa_railgun_00_C
// (Actor)

class UClass* Aba_aa_railgun_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_railgun_00_C");

	return Clss;
}


// ba_aa_railgun_00_C ba_aa_railgun_00.Default__ba_aa_railgun_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_railgun_00_C* Aba_aa_railgun_00_C::GetDefaultObj()
{
	static class Aba_aa_railgun_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_railgun_00_C*>(Aba_aa_railgun_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.GetDefaultMeshMaterials
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSoftObjectPtr<class UMaterialInterface>>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper)
// TArray<TSoftObjectPtr<class UMaterialInterface>>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<TSoftObjectPtr<class UMaterialInterface>> Aba_aa_railgun_00_C::GetDefaultMeshMaterials(TArray<TSoftObjectPtr<class UMaterialInterface>>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "GetDefaultMeshMaterials");

	Params::Aba_aa_railgun_00_C_GetDefaultMeshMaterials_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.GetMappedRecoilValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              OutRecoil                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::GetMappedRecoilValue(float* OutRecoil, int32 CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "GetMappedRecoilValue");

	Params::Aba_aa_railgun_00_C_GetMappedRecoilValue_Params Parms{};

	Parms.CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil = CallFunc_GetCombinedAttachment_Recoil_OutCombinedRecoil;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRecoil != nullptr)
		*OutRecoil = Parms.OutRecoil;

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.UseBullet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseBullet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Aba_aa_railgun_00_C::UseBullet(bool CallFunc_UseBullet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "UseBullet");

	Params::Aba_aa_railgun_00_C_UseBullet_Params Parms{};

	Parms.CallFunc_UseBullet_ReturnValue = CallFunc_UseBullet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ForwardRecoil__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ForwardRecoil__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ForwardRecoil__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ForwardRecoil__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ForwardRecoil__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ForwardRecoil__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ThreeShoots__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ThreeShoots__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ThreeShoots__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ThreeShoots__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ThreeShoots__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ThreeShoots__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ThreeShoots__Event__EventFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ThreeShoots__Event__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ThreeShoots__Event__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.RotationRecoil__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::RotationRecoil__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "RotationRecoil__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.RotationRecoil__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::RotationRecoil__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "RotationRecoil__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnNotifyEnd_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnNotifyEnd_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnNotifyEnd_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7");

	Params::Aba_aa_railgun_00_C_OnNotifyEnd_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnNotifyBegin_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnNotifyBegin_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnNotifyBegin_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7");

	Params::Aba_aa_railgun_00_C_OnNotifyBegin_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnInterrupted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnInterrupted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnInterrupted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7");

	Params::Aba_aa_railgun_00_C_OnInterrupted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnBlendOut_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnBlendOut_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnBlendOut_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7");

	Params::Aba_aa_railgun_00_C_OnBlendOut_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnCompleted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnCompleted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnCompleted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7");

	Params::Aba_aa_railgun_00_C_OnCompleted_14CC7C5F45C8ABAC2CA1F8B5E0CDD8C7_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnNotifyEnd_DE11A6EC465226A2FFFC5481244F068A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnNotifyEnd_DE11A6EC465226A2FFFC5481244F068A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnNotifyEnd_DE11A6EC465226A2FFFC5481244F068A");

	Params::Aba_aa_railgun_00_C_OnNotifyEnd_DE11A6EC465226A2FFFC5481244F068A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnNotifyBegin_DE11A6EC465226A2FFFC5481244F068A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnNotifyBegin_DE11A6EC465226A2FFFC5481244F068A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnNotifyBegin_DE11A6EC465226A2FFFC5481244F068A");

	Params::Aba_aa_railgun_00_C_OnNotifyBegin_DE11A6EC465226A2FFFC5481244F068A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnInterrupted_DE11A6EC465226A2FFFC5481244F068A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnInterrupted_DE11A6EC465226A2FFFC5481244F068A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnInterrupted_DE11A6EC465226A2FFFC5481244F068A");

	Params::Aba_aa_railgun_00_C_OnInterrupted_DE11A6EC465226A2FFFC5481244F068A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnBlendOut_DE11A6EC465226A2FFFC5481244F068A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnBlendOut_DE11A6EC465226A2FFFC5481244F068A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnBlendOut_DE11A6EC465226A2FFFC5481244F068A");

	Params::Aba_aa_railgun_00_C_OnBlendOut_DE11A6EC465226A2FFFC5481244F068A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnCompleted_DE11A6EC465226A2FFFC5481244F068A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnCompleted_DE11A6EC465226A2FFFC5481244F068A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnCompleted_DE11A6EC465226A2FFFC5481244F068A");

	Params::Aba_aa_railgun_00_C_OnCompleted_DE11A6EC465226A2FFFC5481244F068A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ActivationButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ActivationButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ActivationButtonReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ShootLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ShootLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ShootLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnCancelRequest
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnCancelRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnCancelRequest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ShootFirst
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ShootFirst()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ShootFirst");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnEmptyAmmo
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnEmptyAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnEmptyAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnReload
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnForceReloadFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInNoSwap                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_railgun_00_C::OnForceReloadFinished(bool bInNoSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnForceReloadFinished");

	Params::Aba_aa_railgun_00_C_OnForceReloadFinished_Params Parms{};

	Parms.bInNoSwap = bInNoSwap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnInventoryInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnInventoryInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnInventoryInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnReloadFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnReloadFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnReloadFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ShootOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ShootOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ShootOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnAim
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnUnAim
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnUnAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnUnAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnLocalMelee
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnLocalMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnLocalMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnMovementStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class ACGMovementState>InNewMovementState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnMovementStateChanged");

	Params::Aba_aa_railgun_00_C_OnMovementStateChanged_Params Parms{};

	Parms.InNewMovementState = InNewMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ForceInitMagazine
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ForceInitMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ForceInitMagazine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.InvUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::InvUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "InvUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnHideShowAdditional
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EState                  OutTargetState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnHideShowAdditional(enum class EState OutTargetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnHideShowAdditional");

	Params::Aba_aa_railgun_00_C_OnHideShowAdditional_Params Parms{};

	Parms.OutTargetState = OutTargetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnShellCollision
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InEmitterTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InParticleTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVelocity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InDirection                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InNormal                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        InBoneName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           InPhysMat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::OnShellCollision(class FName InEventName, float InEmitterTime, int32 InParticleTime, const struct FVector& InLocation, const struct FVector& InVelocity, const struct FVector& InDirection, const struct FVector& InNormal, class FName InBoneName, class UPhysicalMaterial* InPhysMat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnShellCollision");

	Params::Aba_aa_railgun_00_C_OnShellCollision_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InEmitterTime = InEmitterTime;
	Parms.InParticleTime = InParticleTime;
	Parms.InLocation = InLocation;
	Parms.InVelocity = InVelocity;
	Parms.InDirection = InDirection;
	Parms.InNormal = InNormal;
	Parms.InBoneName = InBoneName;
	Parms.InPhysMat = InPhysMat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.AlternativeActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::AlternativeActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "AlternativeActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.CancelMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::CancelMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "CancelMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.DecrementClipSizeOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InNumOfBullets                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::DecrementClipSizeOnly(int32 InNumOfBullets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "DecrementClipSizeOnly");

	Params::Aba_aa_railgun_00_C_DecrementClipSizeOnly_Params Parms{};

	Parms.InNumOfBullets = InNumOfBullets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ForceEmptyAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ForceEmptyAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ForceEmptyAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.AutoAmmoResupply
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::AutoAmmoResupply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "AutoAmmoResupply");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.IncrementClipSizeOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::IncrementClipSizeOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "IncrementClipSizeOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ShootHitEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InStart                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InEnd                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    InRot                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_railgun_00_C::ShootHitEffects(const struct FVector& InStart, const struct FVector& InEnd, const struct FRotator& InRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ShootHitEffects");

	Params::Aba_aa_railgun_00_C_ShootHitEffects_Params Parms{};

	Parms.InStart = InStart;
	Parms.InEnd = InEnd;
	Parms.InRot = InRot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnSleep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnSleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnSleep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.OnBrokenWeaponUse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::OnBrokenWeaponUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "OnBrokenWeaponUse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.StopShootingBrokenWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::StopShootingBrokenWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "StopShootingBrokenWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ExecuteUbergraph_ba_aa_railgun_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_20                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_21                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_22                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_23                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGNoisePerceptionPropertiesCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionLimb          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseBullet_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbp_ch_igorfpp_01_C*        K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToReload_OutReloadSucceeded                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bInNoSwap                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfValid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFovValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetFovValue_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPerk_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueA_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CheckPerk_ValueB_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPerk_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>K2Node_Event_InNewMovementState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_11                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ch_attachment_magazin_ak47_double_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EState                  K2Node_Event_OutTargetState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_InEventName                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InEmitterTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InParticleTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InLocation                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InVelocity                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InDirection                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_InNormal                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_InBoneName                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_Event_InPhysMat                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InNumOfBullets                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetClipMaxSizeWithUpgrade_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMappedRecoilValue_OutRecoil                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMappedRecoilValue_OutRecoil_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAIWorldType            CallFunc_GetAIWorldType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCGMultitraceResult> CallFunc_CalculateAimedShot_OutMultitraceResults                 (ReferenceParm, ContainsInstancedReference)
// TArray<struct FCGShootResult>      CallFunc_CalculateAimedShot_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// struct FCGMultitraceResult         CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGPhysicalMaterial*         K2Node_DynamicCast_AsCGPhysical_Material                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionLimb          K2Node_Select_Default_12                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCGDamageEvent              K2Node_MakeStruct_CGDamageEvent                                  (ContainsInstancedReference)
// int32                              CallFunc_GetAdditionalBulletCost_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAdditionalBulletCost_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAdditionalBulletCost_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_InStart                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_InEnd                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_InRot                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCombinedAttachment_Range_OutCombinedRange            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGMultitraceResult         K2Node_MakeStruct_CGMultitraceResult                             (NoDestructor, ContainsInstancedReference, UObjectWrapper)
// float                              CallFunc_GetDamageDistanceModifier_OutDMGModifier                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CGApplyDamage_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_aa_railgun_00_C*         K2Node_DynamicCast_AsBa_Aa_Railgun_00                            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_aa_railgun_00_C*         K2Node_DynamicCast_AsBa_Aa_Railgun_00_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class Abp_SleepingBed_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Abp_SleepingBed_C*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsWeaponBroken_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_2                              (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_InverseTransformRotation_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_railgun_00_C::ExecuteUbergraph_ba_aa_railgun_00(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, class FName K2Node_CustomEvent_NotifyName_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, float Temp_float_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_4, float Temp_float_Variable_1, bool Temp_bool_Variable_5, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, int32 Temp_int_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue_2, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable_4, class UAnimMontage* Temp_object_Variable_5, class UAnimMontage* Temp_object_Variable_6, class UAnimMontage* Temp_object_Variable_7, int32 Temp_int_Variable_2, class UAnimSequenceBase* Temp_object_Variable_8, class UAnimSequenceBase* Temp_object_Variable_9, class UAnimSequenceBase* Temp_object_Variable_10, class UAnimSequenceBase* Temp_object_Variable_11, int32 Temp_int_Variable_3, class UAnimSequenceBase* Temp_object_Variable_12, class UAnimSequenceBase* Temp_object_Variable_13, class UAnimSequenceBase* Temp_object_Variable_14, class UAnimSequenceBase* Temp_object_Variable_15, int32 Temp_int_Variable_4, class UAnimSequenceBase* Temp_object_Variable_16, class UAnimSequenceBase* Temp_object_Variable_17, class UAnimSequenceBase* Temp_object_Variable_18, class UAnimSequenceBase* Temp_object_Variable_19, int32 Temp_int_Variable_5, class UAnimSequenceBase* Temp_object_Variable_20, class UAnimSequenceBase* Temp_object_Variable_21, class UAnimSequenceBase* Temp_object_Variable_22, class UAnimSequenceBase* Temp_object_Variable_23, const struct FCGNoisePerceptionProperties& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable_6, int32 CallFunc_PostAkEvent_ReturnValue, enum class ECollisionLimb Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FDelegateProperty_ Temp_delegate_Variable_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, float CallFunc_Add_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_UseBullet_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAbp_ch_igorfpp_01_C* K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, bool CallFunc_TryToReload_OutReloadSucceeded, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, bool CallFunc_Greater_IntInt_ReturnValue_1, bool K2Node_Event_bInNoSwap, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, bool CallFunc_CheckIfValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetFovValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, float CallFunc_GetFovValue_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, class FName K2Node_CustomEvent_NotifyName_7, bool CallFunc_BooleanOR_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, float CallFunc_CheckPerk_ValueA, float CallFunc_CheckPerk_ValueB, bool CallFunc_CheckPerk_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, float CallFunc_CheckPerk_ValueA_1, float CallFunc_CheckPerk_ValueB_1, bool CallFunc_CheckPerk_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, TSubclassOf<class ACGMovementState> K2Node_Event_InNewMovementState, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2, class UAnimMontage* K2Node_Select_Default_3, class UAnimSequenceBase* K2Node_Select_Default_4, class UAnimSequenceBase* K2Node_Select_Default_5, class UAnimMontage* K2Node_Select_Default_6, class UAnimSequenceBase* K2Node_Select_Default_7, class UAnimMontage* K2Node_Select_Default_8, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, class UAnimSequenceBase* K2Node_Select_Default_9, class UAnimSequenceBase* K2Node_Select_Default_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, class UAnimSequenceBase* K2Node_Select_Default_11, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22, float CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_ch_attachment_magazin_ak47_double_C* CallFunc_FinishSpawningActor_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, enum class EState K2Node_Event_OutTargetState, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FName K2Node_Event_InEventName, float K2Node_Event_InEmitterTime, int32 K2Node_Event_InParticleTime, const struct FVector& K2Node_Event_InLocation, const struct FVector& K2Node_Event_InVelocity, const struct FVector& K2Node_Event_InDirection, const struct FVector& K2Node_Event_InNormal, class FName K2Node_Event_InBoneName, class UPhysicalMaterial* K2Node_Event_InPhysMat, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, int32 Temp_int_Variable_6, class FName K2Node_CustomEvent_NotifyName_8, int32 Temp_int_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27, int32 K2Node_CustomEvent_InNumOfBullets, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetClipMaxSizeWithUpgrade_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 Temp_int_Variable_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28, float CallFunc_GetMappedRecoilValue_OutRecoil, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GetMappedRecoilValue_OutRecoil_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorFloat_ReturnValue, enum class EAIWorldType CallFunc_GetAIWorldType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable, TArray<struct FCGMultitraceResult>& CallFunc_CalculateAimedShot_OutMultitraceResults, TArray<struct FCGShootResult>& CallFunc_CalculateAimedShot_ReturnValue, const struct FCGMultitraceResult& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UCGPhysicalMaterial* K2Node_DynamicCast_AsCGPhysical_Material, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, enum class ECollisionLimb K2Node_Select_Default_12, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess_2, const struct FCGDamageEvent& K2Node_MakeStruct_CGDamageEvent, int32 CallFunc_GetAdditionalBulletCost_ReturnValue, int32 CallFunc_GetAdditionalBulletCost_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetAdditionalBulletCost_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_4, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29, int32 CallFunc_PostEvent_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& K2Node_CustomEvent_InStart, const struct FVector& K2Node_CustomEvent_InEnd, const struct FRotator& K2Node_CustomEvent_InRot, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30, float CallFunc_GetCombinedAttachment_Range_OutCombinedRange, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FCGMultitraceResult& K2Node_MakeStruct_CGMultitraceResult, float CallFunc_GetDamageDistanceModifier_OutDMGModifier, float CallFunc_Multiply_FloatFloat_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, float CallFunc_Multiply_FloatFloat_ReturnValue_12, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_13, float CallFunc_Multiply_FloatFloat_ReturnValue_14, float CallFunc_ApplyDamage_ReturnValue, float CallFunc_CGApplyDamage_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31, class Aba_aa_railgun_00_C* K2Node_DynamicCast_AsBa_Aa_Railgun_00, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class Aba_aa_railgun_00_C* K2Node_DynamicCast_AsBa_Aa_Railgun_00_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class Abp_SleepingBed_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Abp_SleepingBed_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, int32 Temp_int_Variable_9, bool CallFunc_GetIsWeaponBroken_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_2, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue_1, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ExecuteUbergraph_ba_aa_railgun_00");

	Params::Aba_aa_railgun_00_C_ExecuteUbergraph_ba_aa_railgun_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.Temp_object_Variable_20 = Temp_object_Variable_20;
	Parms.Temp_object_Variable_21 = Temp_object_Variable_21;
	Parms.Temp_object_Variable_22 = Temp_object_Variable_22;
	Parms.Temp_object_Variable_23 = Temp_object_Variable_23;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_UseBullet_ReturnValue = CallFunc_UseBullet_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01 = K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_TryToReload_OutReloadSucceeded = CallFunc_TryToReload_OutReloadSucceeded;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_Event_bInNoSwap = K2Node_Event_bInNoSwap;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_CheckIfValid_ReturnValue = CallFunc_CheckIfValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetAnimInstance_ReturnValue_5 = CallFunc_GetAnimInstance_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue_6 = CallFunc_GetAnimInstance_ReturnValue_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetAnimInstance_ReturnValue_7 = CallFunc_GetAnimInstance_ReturnValue_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFovValue_ReturnValue = CallFunc_GetFovValue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetFovValue_ReturnValue_1 = CallFunc_GetFovValue_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_CheckPerk_ValueA = CallFunc_CheckPerk_ValueA;
	Parms.CallFunc_CheckPerk_ValueB = CallFunc_CheckPerk_ValueB;
	Parms.CallFunc_CheckPerk_ReturnValue = CallFunc_CheckPerk_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_CheckPerk_ValueA_1 = CallFunc_CheckPerk_ValueA_1;
	Parms.CallFunc_CheckPerk_ValueB_1 = CallFunc_CheckPerk_ValueB_1;
	Parms.CallFunc_CheckPerk_ReturnValue_1 = CallFunc_CheckPerk_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.K2Node_Event_InNewMovementState = K2Node_Event_InNewMovementState;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_GetAnimInstance_ReturnValue_8 = CallFunc_GetAnimInstance_ReturnValue_8;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22;
	Parms.CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage = CallFunc_GetCombinedAttachment_Damage_OutCombinedDamage;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_Event_OutTargetState = K2Node_Event_OutTargetState;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_InEventName = K2Node_Event_InEventName;
	Parms.K2Node_Event_InEmitterTime = K2Node_Event_InEmitterTime;
	Parms.K2Node_Event_InParticleTime = K2Node_Event_InParticleTime;
	Parms.K2Node_Event_InLocation = K2Node_Event_InLocation;
	Parms.K2Node_Event_InVelocity = K2Node_Event_InVelocity;
	Parms.K2Node_Event_InDirection = K2Node_Event_InDirection;
	Parms.K2Node_Event_InNormal = K2Node_Event_InNormal;
	Parms.K2Node_Event_InBoneName = K2Node_Event_InBoneName;
	Parms.K2Node_Event_InPhysMat = K2Node_Event_InPhysMat;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_26;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_27;
	Parms.K2Node_CustomEvent_InNumOfBullets = K2Node_CustomEvent_InNumOfBullets;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetClipMaxSizeWithUpgrade_ReturnValue = CallFunc_GetClipMaxSizeWithUpgrade_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_28;
	Parms.CallFunc_GetMappedRecoilValue_OutRecoil = CallFunc_GetMappedRecoilValue_OutRecoil;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetMappedRecoilValue_OutRecoil_1 = CallFunc_GetMappedRecoilValue_OutRecoil_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_RotatorFloat_ReturnValue = CallFunc_Multiply_RotatorFloat_ReturnValue;
	Parms.CallFunc_GetAIWorldType_ReturnValue = CallFunc_GetAIWorldType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CalculateAimedShot_OutMultitraceResults = CallFunc_CalculateAimedShot_OutMultitraceResults;
	Parms.CallFunc_CalculateAimedShot_ReturnValue = CallFunc_CalculateAimedShot_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
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
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGPhysical_Material = K2Node_DynamicCast_AsCGPhysical_Material;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Select_Default_12 = K2Node_Select_Default_12;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_CGDamageEvent = K2Node_MakeStruct_CGDamageEvent;
	Parms.CallFunc_GetAdditionalBulletCost_ReturnValue = CallFunc_GetAdditionalBulletCost_ReturnValue;
	Parms.CallFunc_GetAdditionalBulletCost_ReturnValue_1 = CallFunc_GetAdditionalBulletCost_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetAdditionalBulletCost_ReturnValue_2 = CallFunc_GetAdditionalBulletCost_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_29;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue_1 = CallFunc_GetSocketRotation_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_InStart = K2Node_CustomEvent_InStart;
	Parms.K2Node_CustomEvent_InEnd = K2Node_CustomEvent_InEnd;
	Parms.K2Node_CustomEvent_InRot = K2Node_CustomEvent_InRot;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue_2 = CallFunc_GetSocketRotation_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_30;
	Parms.CallFunc_GetCombinedAttachment_Range_OutCombinedRange = CallFunc_GetCombinedAttachment_Range_OutCombinedRange;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetControlRotation_ReturnValue_1 = CallFunc_GetControlRotation_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_3 = CallFunc_Multiply_VectorFloat_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.K2Node_MakeStruct_CGMultitraceResult = K2Node_MakeStruct_CGMultitraceResult;
	Parms.CallFunc_GetDamageDistanceModifier_OutDMGModifier = CallFunc_GetDamageDistanceModifier_OutDMGModifier;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_12 = CallFunc_Multiply_FloatFloat_ReturnValue_12;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_13 = CallFunc_Multiply_FloatFloat_ReturnValue_13;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_14 = CallFunc_Multiply_FloatFloat_ReturnValue_14;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_CGApplyDamage_ReturnValue = CallFunc_CGApplyDamage_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_31;
	Parms.K2Node_DynamicCast_AsBa_Aa_Railgun_00 = K2Node_DynamicCast_AsBa_Aa_Railgun_00;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_32;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBa_Aa_Railgun_00_1 = K2Node_DynamicCast_AsBa_Aa_Railgun_00_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_5 = CallFunc_Greater_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.CallFunc_GetIsWeaponBroken_ReturnValue = CallFunc_GetIsWeaponBroken_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue_2 = CallFunc_GetTransform_ReturnValue_2;
	Parms.CallFunc_InverseTransformRotation_ReturnValue = CallFunc_InverseTransformRotation_ReturnValue;
	Parms.CallFunc_InverseTransformRotation_ReturnValue_1 = CallFunc_InverseTransformRotation_ReturnValue_1;
	Parms.CallFunc_InverseTransformLocation_ReturnValue_1 = CallFunc_InverseTransformLocation_ReturnValue_1;
	Parms.CallFunc_InverseTransformLocation_ReturnValue_2 = CallFunc_InverseTransformLocation_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_AddComponent_ReturnValue_2 = CallFunc_AddComponent_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_railgun_00.ba_aa_railgun_00_C.ShootFinishedReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_railgun_00_C::ShootFinishedReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_railgun_00_C", "ShootFinishedReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


