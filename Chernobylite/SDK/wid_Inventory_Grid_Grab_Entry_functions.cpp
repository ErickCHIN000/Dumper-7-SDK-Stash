#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C
// (None)

class UClass* UWid_Inventory_Grid_Grab_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_Grid_Grab_Entry_C");

	return Clss;
}


// wid_Inventory_Grid_Grab_Entry_C wid_Inventory_Grid_Grab_Entry.Default__wid_Inventory_Grid_Grab_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_Grid_Grab_Entry_C* UWid_Inventory_Grid_Grab_Entry_C::GetDefaultObj()
{
	static class UWid_Inventory_Grid_Grab_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_Grid_Grab_Entry_C*>(UWid_Inventory_Grid_Grab_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBeAdded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Grab_Entry_C::Update(bool CanBeAdded, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Grab_Entry_C", "Update");

	Params::UWid_Inventory_Grid_Grab_Entry_C_Update_Params Parms{};

	Parms.CanBeAdded = CanBeAdded;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C.SetContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)

void UWid_Inventory_Grid_Grab_Entry_C::SetContent(class FName ItemId, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Grab_Entry_C", "SetContent");

	Params::UWid_Inventory_Grid_Grab_Entry_C_SetContent_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C.End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Grab_Entry_C::End(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Grab_Entry_C", "End");

	Params::UWid_Inventory_Grid_Grab_Entry_C_End_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C.Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Grab_Entry_C::Start(class FName ItemId, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_PostEvent_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Grab_Entry_C", "Start");

	Params::UWid_Inventory_Grid_Grab_Entry_C_Start_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Grab_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Grab_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Grab_Entry.wid_Inventory_Grid_Grab_Entry_C.ExecuteUbergraph_wid_Inventory_Grid_Grab_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Grab_Entry_C::ExecuteUbergraph_wid_Inventory_Grid_Grab_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Grab_Entry_C", "ExecuteUbergraph_wid_Inventory_Grid_Grab_Entry");

	Params::UWid_Inventory_Grid_Grab_Entry_C_ExecuteUbergraph_wid_Inventory_Grid_Grab_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


