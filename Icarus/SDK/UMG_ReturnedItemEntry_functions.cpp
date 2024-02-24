#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ReturnedItemEntry.UMG_ReturnedItemEntry_C
// (None)

class UClass* UUMG_ReturnedItemEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ReturnedItemEntry_C");

	return Clss;
}


// UMG_ReturnedItemEntry_C UMG_ReturnedItemEntry.Default__UMG_ReturnedItemEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ReturnedItemEntry_C* UUMG_ReturnedItemEntry_C::GetDefaultObj()
{
	static class UUMG_ReturnedItemEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ReturnedItemEntry_C*>(UUMG_ReturnedItemEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ReturnedItemEntry.UMG_ReturnedItemEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ReturnedItemEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReturnedItemEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ReturnedItemEntry.UMG_ReturnedItemEntry_C.ExecuteUbergraph_UMG_ReturnedItemEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_Name                                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ReturnedItemEntry_C::ExecuteUbergraph_UMG_ReturnedItemEntry(int32 EntryPoint, enum class EDataValid CallFunc_ItemDataValid_Paths, class FText CallFunc_GetItemName_Name, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ReturnedItemEntry_C", "ExecuteUbergraph_UMG_ReturnedItemEntry");

	Params::UUMG_ReturnedItemEntry_C_ExecuteUbergraph_UMG_ReturnedItemEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_GetItemName_Name = CallFunc_GetItemName_Name;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


