#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MetaInventory_ViewOnly.UMG_MetaInventory_ViewOnly_C
// (None)

class UClass* UUMG_MetaInventory_ViewOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MetaInventory_ViewOnly_C");

	return Clss;
}


// UMG_MetaInventory_ViewOnly_C UMG_MetaInventory_ViewOnly.Default__UMG_MetaInventory_ViewOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MetaInventory_ViewOnly_C* UUMG_MetaInventory_ViewOnly_C::GetDefaultObj()
{
	static class UUMG_MetaInventory_ViewOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MetaInventory_ViewOnly_C*>(UUMG_MetaInventory_ViewOnly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MetaInventory_ViewOnly.UMG_MetaInventory_ViewOnly_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Main                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMetaItem>           LoadoutInventory                                                 (Edit, BlueprintVisible)
// TArray<struct FMetaItem>           Meta_Inventory                                                   (Edit, BlueprintVisible)
// TArray<struct FDropship>           Dropships                                                        (Edit, BlueprintVisible)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMetaItem>           CallFunc_GetLoadoutInventory_ReturnValue                         (ConstParm, ReferenceParm)
// TArray<struct FMetaItem>           CallFunc_GetMetaInventory_ReturnValue                            (ConstParm, ReferenceParm)

void UUMG_MetaInventory_ViewOnly_C::Initialise(class UInventory* Main, const TArray<struct FMetaItem>& LoadoutInventory, const TArray<struct FMetaItem>& Meta_Inventory, const TArray<struct FDropship>& Dropships, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, TArray<struct FMetaItem>& CallFunc_GetLoadoutInventory_ReturnValue, TArray<struct FMetaItem>& CallFunc_GetMetaInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaInventory_ViewOnly_C", "Initialise");

	Params::UUMG_MetaInventory_ViewOnly_C_Initialise_Params Parms{};

	Parms.Main = Main;
	Parms.LoadoutInventory = LoadoutInventory;
	Parms.Meta_Inventory = Meta_Inventory;
	Parms.Dropships = Dropships;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetLoadoutInventory_ReturnValue = CallFunc_GetLoadoutInventory_ReturnValue;
	Parms.CallFunc_GetMetaInventory_ReturnValue = CallFunc_GetMetaInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MetaInventory_ViewOnly.UMG_MetaInventory_ViewOnly_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MetaInventory_ViewOnly_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaInventory_ViewOnly_C", "Tick");

	Params::UUMG_MetaInventory_ViewOnly_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MetaInventory_ViewOnly.UMG_MetaInventory_ViewOnly_C.ExecuteUbergraph_UMG_MetaInventory_ViewOnly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MetaInventory_ViewOnly_C::ExecuteUbergraph_UMG_MetaInventory_ViewOnly(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UInventory* CallFunc_GetInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MetaInventory_ViewOnly_C", "ExecuteUbergraph_UMG_MetaInventory_ViewOnly");

	Params::UUMG_MetaInventory_ViewOnly_C_ExecuteUbergraph_UMG_MetaInventory_ViewOnly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


