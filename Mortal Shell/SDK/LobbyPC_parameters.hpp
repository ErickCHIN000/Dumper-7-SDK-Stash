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

// 0x1C (0x1C - 0x0)
// Function LobbyPC.LobbyPC_C.CharacterCheck
struct ALobbyPC_C_CharacterCheck_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_656[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyGM_C*                            K2Node_DynamicCast_AsLobby_GM;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Get_Item;                           // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function LobbyPC.LobbyPC_C.SaveGame
struct ALobbyPC_C_SaveGame_Params
{
public:
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_69E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerSaveGame_C*                     CallFunc_CreateSaveGameObject_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerSaveGame_C*                     K2Node_DynamicCast_AsPlayer_Save_Game;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function LobbyPC.LobbyPC_C.LoadGame
struct ALobbyPC_C_LoadGame_Params
{
public:
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             CallFunc_DHLoadGameFromSlot_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerSaveGame_C*                     K2Node_DynamicCast_AsPlayer_Save_Game;             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function LobbyPC.LobbyPC_C.Save Game Check
struct ALobbyPC_C_Save_Game_Check_Params
{
public:
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function LobbyPC.LobbyPC_C.InpActEvt_T_K2Node_InputKeyEvent_0
struct ALobbyPC_C_InpActEvt_T_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function LobbyPC.LobbyPC_C.CallUpdate
struct ALobbyPC_C_CallUpdate_Params
{
public:
	struct FPlayerInfo                           PlayerInfo;                                        // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         ChangedStatus_;                                    // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function LobbyPC.LobbyPC_C.SetupLobbyMenu
struct ALobbyPC_C_SetupLobbyMenu_Params
{
public:
	class FText                                  ServerName;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function LobbyPC.LobbyPC_C.AddPlayerInfo
struct ALobbyPC_C_AddPlayerInfo_Params
{
public:
	TArray<struct FPlayerInfo>                   ConnectedPlayersInfo;                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function LobbyPC.LobbyPC_C.UpdateLobbySettings
struct ALobbyPC_C_UpdateLobbySettings_Params
{
public:
	class UTexture2D*                            MapImage;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  MapName;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  MapTime;                                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function LobbyPC.LobbyPC_C.UpdateNumberOfPlayers
struct ALobbyPC_C_UpdateNumberOfPlayers_Params
{
public:
	int32                                        CurrentPlayers;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlayers;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function LobbyPC.LobbyPC_C.ReceiveEndPlay
struct ALobbyPC_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function LobbyPC.LobbyPC_C.UpdateAvailableCharacters
struct ALobbyPC_C_UpdateAvailableCharacters_Params
{
public:
	TArray<bool>                                 AvailableCharacters;                               // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function LobbyPC.LobbyPC_C.AssignSelectedCharacter
struct ALobbyPC_C_AssignSelectedCharacter_Params
{
public:
	int32                                        CharacterID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CharacterImage;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function LobbyPC.LobbyPC_C.AssignPlayer
struct ALobbyPC_C_AssignPlayer_Params
{
public:
	class UClass*                                Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CharacterImage;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function LobbyPC.LobbyPC_C.GetChatMessage
struct ALobbyPC_C_GetChatMessage_Params
{
public:
	class FText                                  TextToSend;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x30 (0x30 - 0x0)
// Function LobbyPC.LobbyPC_C.UpdateChat
struct ALobbyPC_C_UpdateChat_Params
{
public:
	class FText                                  Sender;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x352 (0x352 - 0x0)
// Function LobbyPC.LobbyPC_C.ExecuteUbergraph_LobbyPC
struct ALobbyPC_C_ExecuteUbergraph_LobbyPC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_93B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x18(0x18)(HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_94B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerInfo                           K2Node_CustomEvent_PlayerInfo;                     // 0x58(0x48)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ChangedStatus_;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_94F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_ServerName;                     // 0xA8(0x18)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyGM_C*                            K2Node_DynamicCast_AsLobby_GM;                     // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_955[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayerInfo>                   K2Node_CustomEvent_ConnectedPlayersInfo;           // 0xD8(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_956[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_95C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_CustomEvent_MapImage;                       // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_MapName;                        // 0x100(0x18)(None)
	class FText                                  K2Node_CustomEvent_MapTime;                        // 0x118(0x18)(None)
	int32                                        K2Node_CustomEvent_CurrentPlayers;                 // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_MaxPlayers;                     // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x138(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x150(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x168(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1A8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1E8(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1F8(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_984[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x214(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_989[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULobbyMenu_C*                          CallFunc_Create_ReturnValue;                       // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue;               // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_98F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 K2Node_CustomEvent_AvailableCharacters;            // 0x240(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UButton*                               CallFunc_Array_Get_Item;                           // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Get_Item_1;                         // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x269(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_CharacterID;                    // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_CustomEvent_CharacterImage_1;               // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfo                           CallFunc_Array_Get_Item_2;                         // 0x280(0x48)(HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Character;                      // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_CustomEvent_CharacterImage;                 // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_TextToSend;                     // 0x2D8(0x18)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALobbyGM_C*                            K2Node_DynamicCast_AsLobby_GM_1;                   // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Sender;                         // 0x308(0x18)(None)
	class FText                                  K2Node_CustomEvent_Text;                           // 0x320(0x18)(None)
	class APlayerController*                     CallFunc_Array_Get_Item_3;                         // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALobbyPC_C*                            K2Node_DynamicCast_AsLobby_PC;                     // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


