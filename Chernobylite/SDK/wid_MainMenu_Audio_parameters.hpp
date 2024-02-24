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

// 0x69 (0x69 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Get Selected Audio Device
struct UWid_MainMenu_Audio_C_Get_Selected_Audio_Device_Params
{
public:
	struct FAudioDeviceInfo                      AudioDevice;                                       // 0x0(0x28)(Parm, OutParm)
	class FName                                  DatatableName;                                     // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentlySelectedIndex_CurrentlySelected; // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AD8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioDeviceInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9B (0x9B - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Get Audio Device With Id
struct UWid_MainMenu_Audio_C_Get_Audio_Device_With_Id_Params
{
public:
	int32                                        AudioDeviceId;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B45[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioDeviceInfo                      AudioDevice;                                       // 0x8(0x28)(Parm, OutParm)
	class FName                                  DatatableName;                                     // 0x30(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B4B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B52[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x50(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioDeviceInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x70(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x74 (0x74 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Setup Audio Devices
struct UWid_MainMenu_Audio_C_Setup_Audio_Devices_Params
{
public:
	TArray<class FText>                          AudioDeviceValues;                                 // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BDE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioDeviceInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x28)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Capitalize Label
struct UWid_MainMenu_Audio_C_Capitalize_Label_Params
{
public:
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x18(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Setup Selectable Manager
struct UWid_MainMenu_Audio_C_Setup_Selectable_Manager_Params
{
public:
	TArray<TScriptInterface<class ISelectableEntryInterace_C>> K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Setup Events
struct UWid_MainMenu_Audio_C_Setup_Events_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Load Settings
struct UWid_MainMenu_Audio_C_Load_Settings_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAudioSettings_MasterVolumeVal;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAudioSettings_MusicVolumeVal;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAudioSettings_DialoguesVolumeVal;      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAudioSettings_EffectsVolumeVal;        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAudioSettings_AudioDeviceIdVal;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D20[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioDeviceInfo                      CallFunc_Get_Audio_Device_With_Id_AudioDevice;     // 0x20(0x28)(None)
	class FName                                  CallFunc_Get_Audio_Device_With_Id_DatatableName;   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Audio_Device_With_Id_Success;         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Set Background Visibility
struct UWid_MainMenu_Audio_C_Set_Background_Visibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Set And Save Audio Settings
struct UWid_MainMenu_Audio_C_Set_And_Save_Audio_Settings_Params
{
public:
	int32                                        SelectedAudioDevice;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EffectVolume;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DialogueVolume;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MusicVolume;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MasterVolume;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DCF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAudioDeviceInfo                      CallFunc_Get_Selected_Audio_Device_AudioDevice;    // 0x18(0x28)(None)
	class FName                                  CallFunc_Get_Selected_Audio_Device_DatatableName;  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue;         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue_1;       // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue_2;       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueWithinMinMax_ReturnValue_3;       // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Select Audio Device
struct UWid_MainMenu_Audio_C_Select_Audio_Device_Params
{
public:
	TArray<float>                                AudioDevicesModifier;                              // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
	struct FAudioDeviceInfo                      CallFunc_Get_Selected_Audio_Device_AudioDevice;    // 0x20(0x28)(None)
	class FName                                  CallFunc_Get_Selected_Audio_Device_DatatableName;  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.PreConstruct
struct UWid_MainMenu_Audio_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.SelectNewEntry
struct UWid_MainMenu_Audio_C_SelectNewEntry_Params
{
public:
	int32                                        EntryIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSoundEvent;                                    // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.Tick
struct UWid_MainMenu_Audio_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function wid_MainMenu_Audio.wid_MainMenu_Audio_C.ExecuteUbergraph_wid_MainMenu_Audio
struct UWid_MainMenu_Audio_C_ExecuteUbergraph_wid_MainMenu_Audio_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_EntryIndex;                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_PostSoundEvent;                       // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


