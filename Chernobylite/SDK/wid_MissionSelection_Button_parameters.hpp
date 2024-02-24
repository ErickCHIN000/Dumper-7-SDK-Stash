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

// 0x18 (0x18 - 0x0)
// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.SetName
struct UWid_MissionSelection_Button_C_SetName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3 (0x3 - 0x0)
// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.ChangeImage
struct UWid_MissionSelection_Button_C_ChangeImage_Params
{
public:
	enum class Enum_Buttons_PC                   Pc;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   X1;                                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  PS4;                                               // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.SetTextures
struct UWid_MissionSelection_Button_C_SetTextures_Params
{
public:
	class UTexture2D*                            Pc;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            PS4;                                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            XBOX1;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.PreConstruct
struct UWid_MissionSelection_Button_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_MissionSelection_Button.wid_MissionSelection_Button_C.ExecuteUbergraph_wid_MissionSelection_Button
struct UWid_MissionSelection_Button_C_ExecuteUbergraph_wid_MissionSelection_Button_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


