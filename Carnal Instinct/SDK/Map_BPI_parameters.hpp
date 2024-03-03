#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x19 - 0x0)
// Function Map_BPI.Map_BPI_C.Update Map Display Visual
struct IMap_BPI_C_Update_Map_Display_Visual_Params
{
public:
	class UObject*                               Map_Display_Image;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Map_Background_Image;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Retainer_Box_Mask_Material;                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Images_Hidden;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Map_BPI.Map_BPI_C.Get Current Map Returns
struct IMap_BPI_C_Get_Current_Map_Returns_Params
{
public:
	TArray<class UMap_Return_BP_C*>              Actors;                                            // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<int32>                                Return_IDs;                                        // 0x10(0x10)(Parm, OutParm)
	TArray<class UClass*>                        Return_Widgets;                                    // 0x20(0x10)(Parm, OutParm)
};

// 0x8 (0x8 - 0x0)
// Function Map_BPI.Map_BPI_C.Remove Map Return
struct IMap_BPI_C_Remove_Map_Return_Params
{
public:
	class AActor*                                Target_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Map_BPI.Map_BPI_C.Add Map Return
struct IMap_BPI_C_Add_Map_Return_Params
{
public:
	class AActor*                                Target_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function Map_BPI.Map_BPI_C.Update Map Markers
struct IMap_BPI_C_Update_Map_Markers_Params
{
public:
	bool                                         Show_Markers;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Friendly_Tags;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                          Hostile_Tags;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                  Targets_Tag;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function Map_BPI.Map_BPI_C.Get Map Info
struct IMap_BPI_C_Get_Map_Info_Params
{
public:
	float                                        Zoom;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        View_Range__meters_;                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_View_Range;                                    // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Min_View_Range;                                    // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Player_Location;                                   // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Player_Z_Rotation;                                 // 0x1C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMap_Source_Component_C*               Source_Component;                                  // 0x28(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Shows_Responses;                                   // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Friendly_Units_Tags;                               // 0x38(0x10)(Parm, OutParm)
	TArray<class FName>                          Hostile_Unit_Tags;                                 // 0x48(0x10)(Parm, OutParm)
};

// 0x9 (0x9 - 0x0)
// Function Map_BPI.Map_BPI_C.Update Zoom Limits
struct IMap_BPI_C_Update_Zoom_Limits_Params
{
public:
	float                                        Min_View_Range;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_View_Range;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Keep_Relative_View_Range;                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function Map_BPI.Map_BPI_C.Set Manual Location
struct IMap_BPI_C_Set_Manual_Location_Params
{
public:
	bool                                         Manually_Update_Location;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Manually_Update_Rotation;                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2201[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               New_Location;                                      // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              New_Z_Rotation;                                    // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Scanner_Source_Is_Map_Source;                      // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


