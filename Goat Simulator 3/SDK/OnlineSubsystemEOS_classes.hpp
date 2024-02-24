#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1C50 - 0x1C48)
// Class OnlineSubsystemEOS.EOSNetConnection
class UEOSNetConnection : public UIpConnection
{
public:
	uint8                                        Pad_C0[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSNetConnection* GetDefaultObj();

};

// 0x8 (0x7F0 - 0x7E8)
// Class OnlineSubsystemEOS.EOSNetDriver
class UEOSNetDriver : public UIpNetDriver
{
public:
	bool                                         bIsPassthrough;                                    // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C7[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSNetDriver* GetDefaultObj();

};

}


