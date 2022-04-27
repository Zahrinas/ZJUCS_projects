<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="S2" />
        <signal name="S4" />
        <signal name="S5" />
        <signal name="S6" />
        <signal name="S3" />
        <signal name="LED(7:0)" />
        <signal name="S1" />
        <port polarity="Input" name="S2" />
        <port polarity="Input" name="S4" />
        <port polarity="Input" name="S5" />
        <port polarity="Input" name="S6" />
        <port polarity="Input" name="S3" />
        <port polarity="Output" name="LED(7:0)" />
        <port polarity="Input" name="S1" />
        <blockdef name="D_74LS138">
            <timestamp>2021-10-18T8:56:13</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-364" height="24" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
        </blockdef>
        <block symbolname="D_74LS138" name="XLXI_1">
            <blockpin signalname="S1" name="A" />
            <blockpin signalname="S2" name="B" />
            <blockpin signalname="S4" name="G" />
            <blockpin signalname="S5" name="G2A" />
            <blockpin signalname="S6" name="G2B" />
            <blockpin signalname="S3" name="C" />
            <blockpin signalname="LED(7:0)" name="Y(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1392" y="1136" name="XLXI_1" orien="R0">
        </instance>
        <branch name="S2">
            <wire x2="1376" y1="848" y2="848" x1="1360" />
            <wire x2="1392" y1="848" y2="848" x1="1376" />
        </branch>
        <branch name="S4">
            <wire x2="1392" y1="912" y2="912" x1="1360" />
        </branch>
        <iomarker fontsize="28" x="1360" y="912" name="S4" orien="R180" />
        <branch name="S5">
            <wire x2="1392" y1="976" y2="976" x1="1360" />
        </branch>
        <iomarker fontsize="28" x="1360" y="976" name="S5" orien="R180" />
        <branch name="S6">
            <wire x2="1392" y1="1040" y2="1040" x1="1360" />
        </branch>
        <iomarker fontsize="28" x="1360" y="1040" name="S6" orien="R180" />
        <branch name="S3">
            <wire x2="1392" y1="1104" y2="1104" x1="1360" />
        </branch>
        <iomarker fontsize="28" x="1360" y="1104" name="S3" orien="R180" />
        <branch name="LED(7:0)">
            <wire x2="1936" y1="784" y2="784" x1="1776" />
        </branch>
        <iomarker fontsize="28" x="1936" y="784" name="LED(7:0)" orien="R0" />
        <branch name="S1">
            <wire x2="1376" y1="784" y2="784" x1="1360" />
            <wire x2="1392" y1="784" y2="784" x1="1376" />
        </branch>
        <iomarker fontsize="28" x="1360" y="848" name="S2" orien="R180" />
        <iomarker fontsize="28" x="1360" y="784" name="S1" orien="R180" />
    </sheet>
</drawing>