#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x19A0 - 0x19A0)
// Class SocketSubsystemSpark.SparkNetConnection
class USparkNetConnection : public UIpConnection
{
public:

	static class UClass* StaticClass();
	static class USparkNetConnection* GetDefaultObj();

};

// 0x0 (0x19A0 - 0x19A0)
// Class SocketSubsystemSpark.SparkBeaconNetConnection
class USparkBeaconNetConnection : public USparkNetConnection
{
public:

	static class UClass* StaticClass();
	static class USparkBeaconNetConnection* GetDefaultObj();

};

// 0x18 (0x590 - 0x578)
// Class SocketSubsystemSpark.SparkNetDriver
class USparkNetDriver : public UIpNetDriver
{
public:
	bool                                         bIsPassthrough;                                    // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USparkNetDriver* GetDefaultObj();

};

// 0x0 (0x590 - 0x590)
// Class SocketSubsystemSpark.SparkBeaconNetDriver
class USparkBeaconNetDriver : public USparkNetDriver
{
public:

	static class UClass* StaticClass();
	static class USparkBeaconNetDriver* GetDefaultObj();

};

}


