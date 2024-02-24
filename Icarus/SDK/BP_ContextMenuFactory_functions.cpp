#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContextMenuFactory.BP_ContextMenuFactory_C
// (Actor)

class UClass* ABP_ContextMenuFactory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContextMenuFactory_C");

	return Clss;
}


// BP_ContextMenuFactory_C BP_ContextMenuFactory.Default__BP_ContextMenuFactory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ContextMenuFactory_C* ABP_ContextMenuFactory_C::GetDefaultObj()
{
	static class ABP_ContextMenuFactory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ContextMenuFactory_C*>(ABP_ContextMenuFactory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShouldShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldShow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContextMenuFactory_C::ShouldShow(bool* ShouldShow, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextMenuFactory_C", "ShouldShow");

	Params::ABP_ContextMenuFactory_C_ShouldShow_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;

}


// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsRadialMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UContextMenuWidget*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShow_ShouldShow                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ContextMenu_Base_C*     CallFunc_FinaliseMenu_ContextMenu                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UContextMenuWidget* ABP_ContextMenuFactory_C::ShowAsRadialMenu(bool CallFunc_ShouldShow_ShouldShow, class UUMG_ContextMenu_Base_C* CallFunc_FinaliseMenu_ContextMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextMenuFactory_C", "ShowAsRadialMenu");

	Params::ABP_ContextMenuFactory_C_ShowAsRadialMenu_Params Parms{};

	Parms.CallFunc_ShouldShow_ShouldShow = CallFunc_ShouldShow_ShouldShow;
	Parms.CallFunc_FinaliseMenu_ContextMenu = CallFunc_FinaliseMenu_ContextMenu;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsContextMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ScreenPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContextMenuWidget*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShow_ShouldShow                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsZero2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetMousePositionOnViewport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ContextMenu_Base_C*     CallFunc_FinaliseMenu_ContextMenu                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ContextMenu_Base_C*     CallFunc_FinaliseMenu_ContextMenu_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UContextMenuWidget* ABP_ContextMenuFactory_C::ShowAsContextMenu(const struct FVector2D& ScreenPosition, bool CallFunc_ShouldShow_ShouldShow, bool CallFunc_IsZero2D_ReturnValue, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UUMG_ContextMenu_Base_C* CallFunc_FinaliseMenu_ContextMenu, class UUMG_ContextMenu_Base_C* CallFunc_FinaliseMenu_ContextMenu_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextMenuFactory_C", "ShowAsContextMenu");

	Params::ABP_ContextMenuFactory_C_ShowAsContextMenu_Params Parms{};

	Parms.ScreenPosition = ScreenPosition;
	Parms.CallFunc_ShouldShow_ShouldShow = CallFunc_ShouldShow_ShouldShow;
	Parms.CallFunc_IsZero2D_ReturnValue = CallFunc_IsZero2D_ReturnValue;
	Parms.CallFunc_GetMousePositionOnViewport_ReturnValue = CallFunc_GetMousePositionOnViewport_ReturnValue;
	Parms.CallFunc_FinaliseMenu_ContextMenu = CallFunc_FinaliseMenu_ContextMenu;
	Parms.CallFunc_FinaliseMenu_ContextMenu_1 = CallFunc_FinaliseMenu_ContextMenu_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.FinaliseMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      MenuClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ScreenPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ContextMenu_Base_C*     ContextMenu                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ContextMenu_Base_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ContextMenuFactory_C::FinaliseMenu(class UClass* MenuClass, const struct FVector2D& ScreenPosition, class UUMG_ContextMenu_Base_C** ContextMenu, class UUMG_ContextMenu_Base_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextMenuFactory_C", "FinaliseMenu");

	Params::ABP_ContextMenuFactory_C_FinaliseMenu_Params Parms{};

	Parms.MenuClass = MenuClass;
	Parms.ScreenPosition = ScreenPosition;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ContextMenu != nullptr)
		*ContextMenu = Parms.ContextMenu;

}


// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.SetContextMenuData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void ABP_ContextMenuFactory_C::SetContextMenuData(class FText& Name, TSoftObjectPtr<class UTexture2D>& Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextMenuFactory_C", "SetContextMenuData");

	Params::ABP_ContextMenuFactory_C_SetContextMenuData_Params Parms{};

	Parms.Name = Name;
	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ExecuteUbergraph_BP_ContextMenuFactory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Name                                                (ConstParm)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_Icon                                                (ConstParm, UObjectWrapper, HasGetValueTypeHash)

void ABP_ContextMenuFactory_C::ExecuteUbergraph_BP_ContextMenuFactory(int32 EntryPoint, class FText K2Node_Event_Name, TSoftObjectPtr<class UTexture2D> K2Node_Event_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextMenuFactory_C", "ExecuteUbergraph_BP_ContextMenuFactory");

	Params::ABP_ContextMenuFactory_C_ExecuteUbergraph_BP_ContextMenuFactory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Name = K2Node_Event_Name;
	Parms.K2Node_Event_Icon = K2Node_Event_Icon;

	UObject::ProcessEvent(Func, &Parms);

}

}


