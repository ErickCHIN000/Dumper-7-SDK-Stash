#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ak_Component_Hero.ak_Component_Hero_C
// (SceneComponent)

class UClass* UAk_Component_Hero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ak_Component_Hero_C");

	return Clss;
}


// ak_Component_Hero_C ak_Component_Hero.Default__ak_Component_Hero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAk_Component_Hero_C* UAk_Component_Hero_C::GetDefaultObj()
{
	static class UAk_Component_Hero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAk_Component_Hero_C*>(UAk_Component_Hero_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ak_Component_Hero.ak_Component_Hero_C.OnLand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_Component_Hero_C::OnLand(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ak_Component_Hero_C", "OnLand");

	Params::UAk_Component_Hero_C_OnLand_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ak_Component_Hero.ak_Component_Hero_C.OnJump
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_Component_Hero_C::OnJump(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ak_Component_Hero_C", "OnJump");

	Params::UAk_Component_Hero_C_OnJump_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ak_Component_Hero.ak_Component_Hero_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAk_Component_Hero_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ak_Component_Hero_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ak_Component_Hero.ak_Component_Hero_C.ExecuteUbergraph_ak_Component_Hero
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAk_Component_Hero_C::ExecuteUbergraph_ak_Component_Hero(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ak_Component_Hero_C", "ExecuteUbergraph_ak_Component_Hero");

	Params::UAk_Component_Hero_C_ExecuteUbergraph_ak_Component_Hero_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


