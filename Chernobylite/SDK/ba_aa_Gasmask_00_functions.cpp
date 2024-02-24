#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_Gasmask_00.ba_aa_Gasmask_00_C
// (Actor)

class UClass* Aba_aa_Gasmask_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_Gasmask_00_C");

	return Clss;
}


// ba_aa_Gasmask_00_C ba_aa_Gasmask_00.Default__ba_aa_Gasmask_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_Gasmask_00_C* Aba_aa_Gasmask_00_C::GetDefaultObj()
{
	static class Aba_aa_Gasmask_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_Gasmask_00_C*>(Aba_aa_Gasmask_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.DrawWaterDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::DrawWaterDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "DrawWaterDrop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.UseUpFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadActiveFilterLastFrame                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              BeforeDecrementationValue                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGHUD_C*                    CallFunc_GetCGHud_AsCGHUD_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_2            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::UseUpFilter(float DeltaTime, bool HadActiveFilterLastFrame, float BeforeDecrementationValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1, int32 CallFunc_FTrunc_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_2, float CallFunc_Remove_ReturnValue, float CallFunc_Count_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "UseUpFilter");

	Params::Aba_aa_Gasmask_00_C_UseUpFilter_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.HadActiveFilterLastFrame = HadActiveFilterLastFrame;
	Parms.BeforeDecrementationValue = BeforeDecrementationValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetCGHud_AsCGHUD = CallFunc_GetCGHud_AsCGHUD;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetCGHud_AsCGHUD_1 = CallFunc_GetCGHud_AsCGHUD_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_2 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_2;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.CallFunc_Count_ReturnValue_1 = CallFunc_Count_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnNotifyEnd_99ECF5E446B8741A2A0079BDF0E367CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnNotifyEnd_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnNotifyEnd_99ECF5E446B8741A2A0079BDF0E367CB");

	Params::Aba_aa_Gasmask_00_C_OnNotifyEnd_99ECF5E446B8741A2A0079BDF0E367CB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnNotifyBegin_99ECF5E446B8741A2A0079BDF0E367CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnNotifyBegin_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnNotifyBegin_99ECF5E446B8741A2A0079BDF0E367CB");

	Params::Aba_aa_Gasmask_00_C_OnNotifyBegin_99ECF5E446B8741A2A0079BDF0E367CB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnInterrupted_99ECF5E446B8741A2A0079BDF0E367CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnInterrupted_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnInterrupted_99ECF5E446B8741A2A0079BDF0E367CB");

	Params::Aba_aa_Gasmask_00_C_OnInterrupted_99ECF5E446B8741A2A0079BDF0E367CB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnBlendOut_99ECF5E446B8741A2A0079BDF0E367CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnBlendOut_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnBlendOut_99ECF5E446B8741A2A0079BDF0E367CB");

	Params::Aba_aa_Gasmask_00_C_OnBlendOut_99ECF5E446B8741A2A0079BDF0E367CB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnCompleted_99ECF5E446B8741A2A0079BDF0E367CB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnCompleted_99ECF5E446B8741A2A0079BDF0E367CB(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnCompleted_99ECF5E446B8741A2A0079BDF0E367CB");

	Params::Aba_aa_Gasmask_00_C_OnCompleted_99ECF5E446B8741A2A0079BDF0E367CB_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnNotifyEnd_FBABA78B41A39EE577A7BDAA46E19870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnNotifyEnd_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnNotifyEnd_FBABA78B41A39EE577A7BDAA46E19870");

	Params::Aba_aa_Gasmask_00_C_OnNotifyEnd_FBABA78B41A39EE577A7BDAA46E19870_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnNotifyBegin_FBABA78B41A39EE577A7BDAA46E19870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnNotifyBegin_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnNotifyBegin_FBABA78B41A39EE577A7BDAA46E19870");

	Params::Aba_aa_Gasmask_00_C_OnNotifyBegin_FBABA78B41A39EE577A7BDAA46E19870_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnInterrupted_FBABA78B41A39EE577A7BDAA46E19870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnInterrupted_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnInterrupted_FBABA78B41A39EE577A7BDAA46E19870");

	Params::Aba_aa_Gasmask_00_C_OnInterrupted_FBABA78B41A39EE577A7BDAA46E19870_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnBlendOut_FBABA78B41A39EE577A7BDAA46E19870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnBlendOut_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnBlendOut_FBABA78B41A39EE577A7BDAA46E19870");

	Params::Aba_aa_Gasmask_00_C_OnBlendOut_FBABA78B41A39EE577A7BDAA46E19870_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.OnCompleted_FBABA78B41A39EE577A7BDAA46E19870
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::OnCompleted_FBABA78B41A39EE577A7BDAA46E19870(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "OnCompleted_FBABA78B41A39EE577A7BDAA46E19870");

	Params::Aba_aa_Gasmask_00_C_OnCompleted_FBABA78B41A39EE577A7BDAA46E19870_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "ReceiveTick");

	Params::Aba_aa_Gasmask_00_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.MakeWaterDrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::MakeWaterDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "MakeWaterDrop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.ForceUnequipGasMaskNoAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::ForceUnequipGasMaskNoAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "ForceUnequipGasMaskNoAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.InvalidateTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::InvalidateTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "InvalidateTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.EquipFromSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::EquipFromSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "EquipFromSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.PrepeareWaterDroplets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::PrepeareWaterDroplets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "PrepeareWaterDroplets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.UpdateGasMaskPostProcessReference
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Gasmask_00_C::UpdateGasMaskPostProcessReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "UpdateGasMaskPostProcessReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Gasmask_00.ba_aa_Gasmask_00_C.ExecuteUbergraph_ba_aa_Gasmask_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsWearingGasMask_WearingGasMask                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_RemoveBlendable_InBlendableObject_CastInput_1           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// class USkeletalMeshComponent*      CallFunc_GetHands_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsWearingGasMask_WearingGasMask_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsWearingGasMask_WearingGasMask_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Gasmask_00_C::ExecuteUbergraph_ba_aa_Gasmask_00(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetIsWearingGasMask_WearingGasMask, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchName_CmpSuccess, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, bool K2Node_SwitchName_CmpSuccess_1, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float K2Node_Event_DeltaSeconds, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class FName K2Node_CustomEvent_NotifyName_9, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, TScriptInterface<class IBlendableInterface> CallFunc_RemoveBlendable_InBlendableObject_CastInput_1, class USkeletalMeshComponent* CallFunc_GetHands_ReturnValue_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, int32 CallFunc_PostEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, bool CallFunc_GetIsWearingGasMask_WearingGasMask_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, int32 CallFunc_PostEvent_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, bool CallFunc_GetIsWearingGasMask_WearingGasMask_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Gasmask_00_C", "ExecuteUbergraph_ba_aa_Gasmask_00");

	Params::Aba_aa_Gasmask_00_C_ExecuteUbergraph_ba_aa_Gasmask_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetIsWearingGasMask_WearingGasMask = CallFunc_GetIsWearingGasMask_WearingGasMask;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput = CallFunc_RemoveBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_GetHands_ReturnValue = CallFunc_GetHands_ReturnValue;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_GetHands_ReturnValue_1 = CallFunc_GetHands_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_RemoveBlendable_InBlendableObject_CastInput_1 = CallFunc_RemoveBlendable_InBlendableObject_CastInput_1;
	Parms.CallFunc_GetHands_ReturnValue_2 = CallFunc_GetHands_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetIsWearingGasMask_WearingGasMask_1 = CallFunc_GetIsWearingGasMask_WearingGasMask_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetIsWearingGasMask_WearingGasMask_2 = CallFunc_GetIsWearingGasMask_WearingGasMask_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;

	UObject::ProcessEvent(Func, &Parms);

}

}


