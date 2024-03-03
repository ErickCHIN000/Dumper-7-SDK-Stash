#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Map_BPI.Map_BPI_C
// (None)

class UClass* IMap_BPI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Map_BPI_C");

	return Clss;
}


// Map_BPI_C Map_BPI.Default__Map_BPI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IMap_BPI_C* IMap_BPI_C::GetDefaultObj()
{
	static class IMap_BPI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IMap_BPI_C*>(IMap_BPI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Map_BPI.Map_BPI_C.Update Map Display Visual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Map_Display_Image                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Map_Background_Image                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Retainer_Box_Mask_Material                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Images_Hidden                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IMap_BPI_C::Update_Map_Display_Visual(class UObject* Map_Display_Image, class UObject* Map_Background_Image, class UMaterialInterface* Retainer_Box_Mask_Material, bool Images_Hidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Update Map Display Visual");

	Params::IMap_BPI_C_Update_Map_Display_Visual_Params Parms{};

	Parms.Map_Display_Image = Map_Display_Image;
	Parms.Map_Background_Image = Map_Background_Image;
	Parms.Retainer_Box_Mask_Material = Retainer_Box_Mask_Material;
	Parms.Images_Hidden = Images_Hidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_BPI.Map_BPI_C.Get Current Map Returns
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMap_Return_BP_C*>    Actors                                                           (Parm, OutParm, ContainsInstancedReference)
// TArray<int32>                      Return_IDs                                                       (Parm, OutParm)
// TArray<class UClass*>              Return_Widgets                                                   (Parm, OutParm)

void IMap_BPI_C::Get_Current_Map_Returns(TArray<class UMap_Return_BP_C*>* Actors, TArray<int32>* Return_IDs, TArray<class UClass*>* Return_Widgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Get Current Map Returns");

	Params::IMap_BPI_C_Get_Current_Map_Returns_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Actors != nullptr)
		*Actors = std::move(Parms.Actors);

	if (Return_IDs != nullptr)
		*Return_IDs = std::move(Parms.Return_IDs);

	if (Return_Widgets != nullptr)
		*Return_Widgets = std::move(Parms.Return_Widgets);

}


// Function Map_BPI.Map_BPI_C.Remove Map Return
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMap_BPI_C::Remove_Map_Return(class AActor* Target_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Remove Map Return");

	Params::IMap_BPI_C_Remove_Map_Return_Params Parms{};

	Parms.Target_Actor = Target_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_BPI.Map_BPI_C.Add Map Return
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMap_BPI_C::Add_Map_Return(class AActor* Target_Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Add Map Return");

	Params::IMap_BPI_C_Add_Map_Return_Params Parms{};

	Parms.Target_Actor = Target_Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_BPI.Map_BPI_C.Update Map Markers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_Markers                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Friendly_Tags                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                Hostile_Tags                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Targets_Tag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IMap_BPI_C::Update_Map_Markers(bool Show_Markers, TArray<class FName>& Friendly_Tags, TArray<class FName>& Hostile_Tags, class FName Targets_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Update Map Markers");

	Params::IMap_BPI_C_Update_Map_Markers_Params Parms{};

	Parms.Show_Markers = Show_Markers;
	Parms.Friendly_Tags = Friendly_Tags;
	Parms.Hostile_Tags = Hostile_Tags;
	Parms.Targets_Tag = Targets_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_BPI.Map_BPI_C.Get Map Info
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Zoom                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              View_Range__meters_                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max_View_Range                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Min_View_Range                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Player_Location                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Player_Z_Rotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMap_Source_Component_C*     Source_Component                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Shows_Responses                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Friendly_Units_Tags                                              (Parm, OutParm)
// TArray<class FName>                Hostile_Unit_Tags                                                (Parm, OutParm)

void IMap_BPI_C::Get_Map_Info(float* Zoom, float* View_Range__meters_, float* Max_View_Range, float* Min_View_Range, struct FVector* Player_Location, struct FRotator* Player_Z_Rotation, class UMap_Source_Component_C** Source_Component, bool* Shows_Responses, TArray<class FName>* Friendly_Units_Tags, TArray<class FName>* Hostile_Unit_Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Get Map Info");

	Params::IMap_BPI_C_Get_Map_Info_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Zoom != nullptr)
		*Zoom = Parms.Zoom;

	if (View_Range__meters_ != nullptr)
		*View_Range__meters_ = Parms.View_Range__meters_;

	if (Max_View_Range != nullptr)
		*Max_View_Range = Parms.Max_View_Range;

	if (Min_View_Range != nullptr)
		*Min_View_Range = Parms.Min_View_Range;

	if (Player_Location != nullptr)
		*Player_Location = std::move(Parms.Player_Location);

	if (Player_Z_Rotation != nullptr)
		*Player_Z_Rotation = std::move(Parms.Player_Z_Rotation);

	if (Source_Component != nullptr)
		*Source_Component = Parms.Source_Component;

	if (Shows_Responses != nullptr)
		*Shows_Responses = Parms.Shows_Responses;

	if (Friendly_Units_Tags != nullptr)
		*Friendly_Units_Tags = std::move(Parms.Friendly_Units_Tags);

	if (Hostile_Unit_Tags != nullptr)
		*Hostile_Unit_Tags = std::move(Parms.Hostile_Unit_Tags);

}


// Function Map_BPI.Map_BPI_C.Update Zoom Limits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Min_View_Range                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max_View_Range                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Keep_Relative_View_Range                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IMap_BPI_C::Update_Zoom_Limits(float Min_View_Range, float Max_View_Range, bool Keep_Relative_View_Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Update Zoom Limits");

	Params::IMap_BPI_C_Update_Zoom_Limits_Params Parms{};

	Parms.Min_View_Range = Min_View_Range;
	Parms.Max_View_Range = Max_View_Range;
	Parms.Keep_Relative_View_Range = Keep_Relative_View_Range;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Map_BPI.Map_BPI_C.Zoom Out
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMap_BPI_C::Zoom_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Zoom Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_BPI.Map_BPI_C.Zoom In
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IMap_BPI_C::Zoom_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Zoom In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Map_BPI.Map_BPI_C.Set Manual Location
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Manually_Update_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Manually_Update_Rotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     New_Location                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    New_Z_Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Scanner_Source_Is_Map_Source                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IMap_BPI_C::Set_Manual_Location(bool Manually_Update_Location, bool Manually_Update_Rotation, const struct FVector& New_Location, const struct FRotator& New_Z_Rotation, bool Scanner_Source_Is_Map_Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Map_BPI_C", "Set Manual Location");

	Params::IMap_BPI_C_Set_Manual_Location_Params Parms{};

	Parms.Manually_Update_Location = Manually_Update_Location;
	Parms.Manually_Update_Rotation = Manually_Update_Rotation;
	Parms.New_Location = New_Location;
	Parms.New_Z_Rotation = New_Z_Rotation;
	Parms.Scanner_Source_Is_Map_Source = Scanner_Source_Is_Map_Source;

	UObject::ProcessEvent(Func, &Parms);

}

}


