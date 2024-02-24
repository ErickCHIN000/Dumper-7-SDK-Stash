#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1E08 - 0x1DF8)
// Class SteamSockets.SteamSocketsNetConnection
class USteamSocketsNetConnection : public UNetConnection
{
public:
	uint8                                        Pad_1065[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetConnection* GetDefaultObj();

};

// 0x10 (0x800 - 0x7F0)
// Class SteamSockets.SteamSocketsNetDriver
class USteamSocketsNetDriver : public UNetDriver
{
public:
	uint8                                        Pad_1070[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamSocketsNetDriver* GetDefaultObj();

};

}


